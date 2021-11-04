#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(400,400);
    spin1 = new QSpinBox(this);
    spin2 = new QSpinBox(this);
    spin3 = new QSpinBox(this);
    spin4 = new QSpinBox(this);
    spin5 = new QSpinBox(this);
    spin6 = new QSpinBox(this);
    spin7 = new QSpinBox(this);
    spin8 = new QSpinBox(this);
    lcd1 = new QLCDNumber(this);
    lcd2 = new QLCDNumber(this);
    layout1 = new QBoxLayout(QBoxLayout :: LeftToRight, this);
    layout1 -> addWidget(spin1);
    layout1 -> addWidget(spin2);
    layout1 -> addWidget(spin3);
    layout1 -> addWidget(spin4);
    layout1 -> addWidget(spin5);
    layout1 -> addWidget(spin6);
    layout1 -> addWidget(spin7);
    layout1 -> addWidget(spin8);
    lcd1 -> move(10, 100);
    lcd2 -> move(300, 100);
    spin1 -> setMaximum(2000);
    spin2 -> setMaximum(2000);
    spin3 -> setMaximum(2000);
    spin4 -> setMaximum(2000);
    spin5 -> setMaximum(2000);
    spin6 -> setMaximum(2000);
    spin7 -> setMaximum(2000);
    spin8 -> setMaximum(2000);

    setMouseTracking(true);
}

void Widget :: moveEvent(QMoveEvent *e)
{
    QPoint position = e->pos();
    int x = position.x();
    int y = position.y();
    spin1 -> setValue(x);
    spin2 -> setValue(y);

}

void Widget :: resizeEvent(QResizeEvent *e)
{
    QSize size = e->size();
    int w = size.width();
    int h = size.height();
    spin3 -> setValue(w);
    spin4 -> setValue(h);
}

void Widget :: mouseMoveEvent(QMouseEvent *e)
{
    int widget_x = e -> x();
    int widget_y = e -> y();
    int glob_x = e -> globalX();
    int glob_y = e -> globalY();
    spin5 -> setValue(widget_x);
    spin6 -> setValue(widget_y);
    spin7 -> setValue(glob_x);
    spin8 -> setValue(glob_y);
}

void Widget :: mousePressEvent(QMouseEvent *e)
{
    if(Qt::LeftButton &e->button())
        lcd1 -> display(lcd1 -> value()+1);
    else if(Qt :: RightButton &e -> button())
        lcd2 -> display(lcd2 -> value()+1);
}

void Widget :: keyPressEvent(QKeyEvent *e)
{
    if(Qt :: Key_1 == e -> key())
        lcd1 -> display(0);
    else if(Qt :: Key_R == e -> key())
        lcd2 -> display(0);
}
Widget::~Widget()
{
}

