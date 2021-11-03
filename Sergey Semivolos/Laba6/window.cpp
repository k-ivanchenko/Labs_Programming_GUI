#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    setGeometry(500, 500, 300, 250);
    num1 = new QLCDNumber(this);
    num1 -> move(10, 10);
    num2 = new QLCDNumber(this);
    num2 -> move(150, 10);
    spin1 = new QSpinBox(this);
    spin1 -> move(10, 50);
    spin1 -> setMaximum(9999);
    spin2 = new QSpinBox(this);
    spin2 -> move(150, 50);
    spin2 -> setValue(250);
    spin2 -> setMaximum(9999);
    spin3 = new QSpinBox(this);
    spin3 -> move(10, 90);
    spin3 -> setMaximum(9999);
    spin4 = new QSpinBox(this);
    spin4 -> move(150, 90);
    spin4 -> setMaximum(9999);
    spin5 = new QSpinBox(this);
    spin5 -> move(10, 130);
    spin5 -> setMaximum(9999);
    spin6 = new QSpinBox(this);
    spin6 -> move(150, 130);
    spin6 -> setMaximum(9999);
    spin7 = new QSpinBox(this);
    spin7 -> move(10, 170);
    spin7 -> setMaximum(9999);
    spin8 = new QSpinBox(this);
    spin8 -> move(150, 170);
    spin8 -> setMaximum(9999);


    setMouseTracking(true);
}
void Window :: resizeEvent(QResizeEvent *e)
{
    QSize size =e->size();
    int w=size.width();
    int h=size.height();
    spin3 -> setValue(w);
    spin4 -> setValue(h);
}
void Window :: mouseMoveEvent(QMouseEvent *e)
{
    int a=e->x();
    int b=e->y();
    int c=e->globalX();
    int d=e->globalY();
    spin5->setValue(a);
    spin6->setValue(b);
    spin7->setValue(c);
    spin8->setValue(d);
}
void Window :: mousePressEvent(QMouseEvent *e)
{

    if(Qt::LeftButton&e->button())
        num1->display(num1->value()+1);
    if(Qt::RightButton&e->button())
        num2->display(num2->value()+1);
}
void Window :: keyPressEvent(QKeyEvent *e)
{
    if(Qt::Key_F1 == e -> key())
        num1->display(0);
    else if(Qt::Key_F2 == e->key())
        num2->display(0);
    //Как настроить на кнопки клавиатуры не разобрался
}

void Window :: moveEvent(QMoveEvent *e)
{
    QPoint pos=e->pos();
    int x=pos.x();
    int y=pos.y();
    spin1->setValue(x);
    spin2->setValue(y);
}

Window::~Window()
{

}

