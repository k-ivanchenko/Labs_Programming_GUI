#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    counter = new QSpinBox(this);
    timer = new QTimer(this);
    x = 0, y = 0;
    counter->setMinimum(1);
    counter->setMaximum(10000);
    counter->setValue(100);

    counter->move(300, 200);

    timer->start(100);

    connect(counter, SIGNAL(valueChanged(int)), this, SLOT(slotCounter(int)));
    connect(timer, SIGNAL(timeout()), this, SLOT(moveSquare()));

}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent* e){
    painter.begin(this);
    pen.setColor(Qt::red);
    pen.setWidth(3);
    pen.setStyle(Qt::DashLine);
    painter.setPen(pen);
    painter.drawRect(x, y, 200, 200);
    painter.end();

}

void Widget::slotCounter(int val){
    timer->start(val);
}

void Widget::moveSquare(){

    while(x < frameSize().width()-200){
        x++;
        repaint();
    }

    while(y < frameSize().height()-200){
        y++;
        repaint();
    }

    while(x != 0){
        x--;
        repaint();
    }

    while(y != 0){
        y--;
        repaint();
    }

}

