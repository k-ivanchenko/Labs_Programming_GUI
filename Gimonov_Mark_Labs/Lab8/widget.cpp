#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    counter = new QSpinBox(this);
    timer = new QTimer(this);
    x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    counter->setMinimum(1);
    counter->setMaximum(10000);
    counter->setValue(100);

    counter->move(100, 25);

    timer->start(100);

    connect(counter, SIGNAL(valueChanged(int)), this, SLOT(slotCounter(int)));
    connect(timer, SIGNAL(timeout()), this, SLOT(moveSquare()));


}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent* e){
    QPainter painter;
    QPen pen;
    painter.begin(this);
    painter.setBackgroundMode(Qt::OpaqueMode);
    painter.setBackground(Qt::white);
    pen.setColor(Qt::red);
    pen.setWidth(3);
    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);

    painter.drawRect(x1, y1, x2, y2);
    painter.end();

}

void Widget::slotCounter(int val){
    timer->start(val);
}

void Widget::moveSquare(){
    for(int i = 0; i < 10; i++){
       y1-=i, y2-=i;
       repaint();
    }
    QThread::msleep(100);

    for(int i = 0; i < 10; i++){
       x1+=i, x2+=i;
       repaint();
    }
    QThread::msleep(100);
    for(int i = 0; i < 10; i++){
       y1+=i, y2+=i;
       repaint();
    }
    QThread::msleep(100);
    for(int i = 0; i < 10; i++){
       x1-=i, x2-=i;
       repaint();
    }
    QThread::msleep(100);
}

