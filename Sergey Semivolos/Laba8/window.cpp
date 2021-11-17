#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500, 500);
    spin = new QSpinBox(this);
    spin -> move(10, 10);
    spin -> setMinimum(1000);
    spin -> setMaximum(5000);
    spin -> setSingleStep(1000);
    butt = new QPushButton("Reset", this);
    butt -> move(150, 10);
    butt -> setVisible(false);
    timer = new QTimer(this);
    timer -> start(1000);

    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));
    connect(spin, SIGNAL(valueChanged(int)), this, SLOT(interval(int)));
    connect(butt, SIGNAL(clicked()), this, SLOT(activate()));


}
void Window :: interval(int a)
{
    timer -> setInterval(a);
}
void Window :: activate()
{
    int n = spin->value();
    timer -> start(n);
    butt->setVisible(false);

}
void Window :: Move()
{
    int a = frameGeometry().width();
    int b = frameGeometry().height();
    resize(a, b);
    resize(a-2, b-32);
    w =((a-2)/10)*j;
    h =((b-32)/10)*j;
    j++;
    if(h > b-32 and w > a-2)
    {
        h = 0;
        w = 0;
        j = 1;
        timer -> stop();
        butt -> setVisible(true);
    }
}
void Window :: paintEvent(QPaintEvent *e)
{
    QPainter painter;
    painter.begin(this);
    QPen pen(Qt::black);
    painter.setPen(pen);
    pen.setWidth(3);
    pen.setStyle(Qt::DashLine);
    pen.setColor(QColor(0, 0, 0));
    painter.setPen(pen);
    int a = frameGeometry().width();
    int b = frameGeometry().height();
    painter.drawLine(a, 0, 0, b-30);
    pen.setColor(QColor(255, 0, 0));
    pen.setStyle(Qt::NoPen);
    painter.setPen(pen);
    QBrush brush(Qt::red, Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawEllipse(a-50-w, 0+h, 50, 50);
}

Window::~Window()
{

}

