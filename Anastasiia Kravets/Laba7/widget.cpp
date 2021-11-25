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


void Widget::moveEvent(QMoveEvent *e){
    QPoint pos = e->pos();
    int x=pos.x();
    int y=pos.y();
    QString A =QString :: number(x);
    QString B =QString :: number(y);
      line->setText(line->maximumHeight());
      line2->setText(line2->maximumHeight());

}




void Widget::keyPressEvent(QKeyEvent *e)
{
    //if(line->setFocus()){


    if (Qt::Key_Up == e->key())
    {
        int b=50;
        line->move(100, 100-b);


    }

     if (Qt::Key_Right == e->key())
{
    int d=50;
    line->move(100+d, 100);

}
    if (Qt::Key_Left == e->key())
{
    int a=50;
    line->move(100-a, 100);

}
      if (Qt::Key_Down == e->key())
{
    int c=100;
    line->move(100, 100+c);

}}
//}




Widget::~Widget()
{
    delete ui;
}

