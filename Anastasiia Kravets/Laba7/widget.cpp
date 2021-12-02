#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    resize(500, 500);

    line= new QLineEdit(this);
    line2= new QLineEdit(this);
    line->setMaximumWidth(100);
    line->setMaximumHeight(50);
    line2->setMaximumWidth(100);
    line2->setMaximumHeight(50);

    line->move(100, 100);
    line2->move(100, 150);


}


void Widget::keyPressEvent(QKeyEvent *e)
{    int b=5;


if(line->hasFocus()){


    if (Qt::Key_Up == e->key())
    {

        line->move(line->pos().x(), line->pos().y()-b);

    }

    if (Qt::Key_Down == e->key())
{

    line->move(line->pos().x(), line->pos().y()+b);

}

     if (Qt::Key_Right == e->key())
{

    line->move(line->pos().x()+b, line->pos().y());

}
    if (Qt::Key_Left == e->key())
{

    line->move(line->pos().x()-b, line->pos().y());

}
}


else{


    if (Qt::Key_Up == e->key())
    {

        line2->move(line2->pos().x(), line2->pos().y()-b);
    }

     if (Qt::Key_Down == e->key())
    {

        line2->move(line2->pos().x(), line2->pos().y()+b);


    }

     if (Qt::Key_Alt == e->key())
{

    line2->move(line2->pos().x()+b, line2->pos().y());

}
    if (Qt::Key_Control == e->key())
{

    line2->move(line2->pos().x()-b, line2->pos().y());

}

}



  int i = line2->pos().y();
  int j = line->pos().y();
 QString W = QString::number( i );
  QString V = QString::number( j );
 line->setText(W);
  line2->setText(V);

}



Widget::~Widget()
{
    delete ui;
}

