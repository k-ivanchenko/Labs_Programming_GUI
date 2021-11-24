#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(400,400);

    slider = new QSlider(Qt::Vertical,this);
       timer = new QTimer(this);

       slider->setValue(100);

       slider->move(250, 25);
tm=0;
       timer->start(1000);

       connect(slider, SIGNAL(valueChanged(int)), this, SLOT(slotSlider(int)));
       connect(timer, SIGNAL(timeout()), this, SLOT(moveTriangle()));

}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent* e){
    QPainter painter(this);
    painter.begin(this);
    painter.setBackgroundMode(Qt::OpaqueMode);
    painter.setBackground(Qt::white);


       QPolygon polygon;
       polygon << QPoint(x, y+30)
               << QPoint(x+30, y)
               << QPoint(x+30,y+60);
       painter.drawPolygon(polygon);
       painter.end();

}

void Widget::slotSlider(int t){
    timer->start(t);
}
void Widget::moveTriangle()
{





    if (tm==0){
          tm=1;
           x=0;
           y=0;
           repaint();
           timer -> setInterval(1000);
       }

       else if(tm==1){
          tm=2;
           x=100;
           y=100;
           repaint();
           timer -> setInterval(1000);

       }
       else if(tm==2){
          tm=3;
           x=200;
           y=200;
           repaint();
           timer -> setInterval(1000);

       }
       else if(tm==3){
           tm=4;
           x=300;
           y=300;
           repaint();
           timer -> setInterval(1000);

       }
    else {
        x=365;
        y=345;
        repaint();
        timer->stop();
    }
   

}

