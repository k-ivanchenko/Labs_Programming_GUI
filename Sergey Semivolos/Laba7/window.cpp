#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300, 300);
    txt = new QLabel("Hello", this);
    txt -> move(100,10);
    txt -> resize(40, 30);
    num1 = new QLCDNumber(this);
    num1 -> move(10,40);
    num1 -> resize(50,30);
    num2 = new QLCDNumber(this);
    num2 -> move(120, 40);
    num2 -> resize(50, 30);


    setMouseTracking(true);
}

void Window :: mouseMoveEvent(QMouseEvent *e)
{
    int tx1 = txt->x(), tx2 = txt->y();
    int lcd1 = num1->x(), lcd2 = num1->y();
    int lcd3 = num2->x(), lcd4 = num2->y();
    int a=e->x();
    int b=e->y();
    bool leftPress=e->buttons()&Qt::LeftButton;
    if(leftPress && ((a>=tx1 && a<=tx1+40) && (b>=tx2 && b<=tx2+30)))
    {
    int t1 = a-20, t2 = b-10;
    txt -> move(t1, t2);
    num1 -> display(t1);
    num2 -> display(t2);
    }
    else if(leftPress && ((a>=lcd1 && a<=lcd1+40) && (b>=lcd2 && b<=lcd2+30)))
    {
        int n1 = a-20, n2 = b-10;
        num1 -> move(n1, n2);
    }
    else if(leftPress && ((a>=lcd3 && a<=lcd3+40) && (b>=lcd4 && b<=lcd4+30)))
    {
        int nu1 = a-20, nu2 = b-10;
        num2 -> move(nu1, nu2);
    }
}
Window::~Window()
{

}

