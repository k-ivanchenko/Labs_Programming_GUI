#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    line1 = new QLineEdit(this);
    line2 = new QLineEdit(this);

    line1->move(50, 50);
    line1->setFocusPolicy(Qt::NoFocus);
    line2->move(50, 150);
    line2->setFocusPolicy(Qt::NoFocus);

    line1->resize(100, 50);
    line2->resize(100, 50);
    a=0;
}

Widget::~Widget()
{
}


void Widget :: mousePressEvent(QMouseEvent *e)
{
    if(Qt::LeftButton &e->button())
    {
        a++;
    }
}

void Widget :: keyPressEvent(QKeyEvent *e)
{
    if(a%2==0)
   {
   if(Qt::Key_Up == e->key())
   {
       line1->move(line1->x(), line1->y()-5);
       line2->setText(QString::number(line1->x()));
   }
   if(Qt::Key_Right == e->key())
   {
       line1->move(line1->x()+5, line1->y());
       line2->setText(QString::number(line1->x()));

   }
   if(Qt::Key_Down == e->key())
   {
       line1->move(line1->x(), line1->y()+5);
       line2->setText(QString::number(line1->x()));
   }
   if(Qt::Key_Left == e->key())
   {
       line1->move(line1->x()-5, line1->y());
       line2->setText(QString::number(line1->x()));
   }
   }


    if(a%2!=0)
   {
       if(Qt::Key_Up == e->key())
       {
           line2->move(line2->x(), line2->y()-5);
           line1->setText(QString::number(line2->x()));
       }
       if(Qt::Key_Right == e->key())
       {
           line2->move(line2->x()+5, line2->y());
           line1->setText(QString::number(line2->x()));
       }
       if(Qt::Key_Down == e->key())
       {
           line2->move(line2->x(), line2->y()+5);
           line1->setText(QString::number(line2->x()));
       }
       if(Qt::Key_Left == e->key())
       {
           line2->move(line2->x()-5, line2->y());
           line1->setText(QString::number(line2->x()));
       }
   }
}


