#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{ 
        setMouseTracking(true);
        grid = new QGridLayout (this);

        edit1 = new QLineEdit("0",this);
        edit2 = new QLineEdit("0",this);
        edit3 = new QLineEdit("0",this);
        edit4 = new QLineEdit("0",this);
        edit5 = new QLineEdit("0",this);
        edit6 = new QLineEdit("0",this);
        edit7 = new QLineEdit("0",this);
        edit8 = new QLineEdit("0",this);


        lbl1 = new QLabel("0" , this);
        lbl2 = new QLabel("0", this);

        grid->addWidget(lbl1, 0, 0);
        grid->addWidget(lbl2, 0, 1);
        grid->addWidget(edit1, 1, 0);
        grid->addWidget(edit2, 1, 1);
        grid->addWidget(edit3, 2, 0);
        grid->addWidget(edit4, 2, 1);
        grid->addWidget(edit5, 3, 0);
        grid->addWidget(edit6, 3, 1);
        grid->addWidget(edit7, 4, 0);
        grid->addWidget(edit8, 4, 1);

}

Widget::~Widget()
{
}

void Widget::moveEvent(QMoveEvent *e)
{
    QPoint pos = e->pos();
    int x = pos.x();
    int y = pos.y();
    edit1->setText(QString::number(x));
    edit2->setText(QString::number(y));
}

 void Widget::resizeEvent(QResizeEvent *e)
 {
     QSize size = e->size();
     int w = size.width();
     int h = size.height();
     edit3->setText(QString::number(w));
     edit4->setText(QString::number(h));
 }

 void Widget::mouseMoveEvent(QMouseEvent *e)
 {
     int x = e->x();
     int y = e->y();
     int gx = e->globalX();
     int gy = e->globalY();
     edit5->setText(QString::number(x));
     edit6->setText(QString::number(y));
     edit7->setText(QString::number(gx));
     edit8->setText(QString::number(gy));
 }

 void Widget::mousePressEvent (QMouseEvent *e)
 {
     if (Qt::LeftButton&e->button())
     {
      l++;
      lbl1->setText(QString::number(l, 10));
     }
     else if (Qt::RightButton&e->button())
     {
         r++;
         lbl2->setText(QString::number(r, 10));
     }
 }

 void Widget::keyPressEvent (QKeyEvent *e)
 {
     if(Qt::Key_L == e->key())
     {
         lbl1->setText("0");
         l = 0;
     }
     else if(Qt::Key_R == e->key())
     {
         lbl2->setText("0");
         r = 0;
     }
 }
