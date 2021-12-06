#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
   resize(300,300);
   sbox1=new QSpinBox(this);
   sbox1->move(150,150);
   sbox1->setMaximum(300);
   sbox2=new QSpinBox(this);
   sbox2->move(90,150);
   sbox2->setMaximum(300);


   connect(sbox1, SIGNAL(textChanged(QString)), this, SLOT(Sbox1(QString)));
       connect(sbox2, SIGNAL(textChanged(QString)), this, SLOT(Sbox2(QString)));

}

void Widget::Sbox1(QString val){
    sbox2->move(sbox2->y(), val.toInt());
}

void Widget::Sbox2(QString val){
    sbox1->move(sbox1->x(), val.toInt());
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    switch ( e->key() )
        {
        case Qt::Key_A:
            sbox1->move(x()-10,y());


            break;
        case Qt::Key_D:
            sbox1->move(x()+10,y());

            break;
    case Qt::Key_W:
        sbox1->move(x(),y()+10);
            break;
    case Qt::Key_S:
        sbox1->move(x(),y()-10);
        }
}




Widget::~Widget()
{
}

