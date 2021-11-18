#include "lab8.h"

lab8::lab8(QWidget *parent)
    : QMainWindow(parent)
{
    spb = new QSpinBox(this);
    timer = new QTimer(this);
    painter = new QPainter();
    counter=0;
    x=0;
    y=0;
    timer->setInterval(1000);
    spb->hide();

    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(moveIt()));
    connect(spb, SIGNAL(valueChanged(int)), this, SLOT(settimer(int c)));
}

void lab8::paintEvent(QPaintEvent *e){
    painter->begin(this);
    QPolygon polygon;
    polygon << QPoint(x, y+20) << QPoint(x+20, 0) << QPoint(x+20,y+40);
    painter->drawPolygon(polygon);
    painter->end();
}

void lab8::moveIt(){
    if (counter==0){
        counter=1;
        x=0;
        y=0;
        repaint();
    }
    else if(counter==1){
        x=0;
        y=300;
        repaint();
    }
    else if(counter==2){
        x=300;
        y=300;
        repaint();
    }
    else if(counter==3){
        x=300;
        y=0;
        repaint();
    }
}

void lab8::settimer(int c)
{
    timer->setInterval(c);
}

lab8::~lab8()
{
}

