#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setMouseTracking(true);

    lcd1 = new QLCDNumber(this);
    lcd2 = new QLCDNumber(this);
    lcd3 = new QLCDNumber(this);
    lcd4 = new QLCDNumber(this);
    lcd5 = new QLCDNumber(this);
    lcd6 = new QLCDNumber(this);
    lcd7 = new QLCDNumber(this);
    lcd8 = new QLCDNumber(this);

    lbl1 = new QLabel(this);
    lbl2 = new QLabel(this);

    layout = new QBoxLayout(QBoxLayout :: LeftToRight, this);
    layout->addWidget(lcd1);
    layout->addWidget(lcd2);
    layout->addWidget(lcd3);
    layout->addWidget(lcd4);
    layout->addWidget(lcd5);
    layout->addWidget(lcd6);
    layout->addWidget(lcd7);
    layout->addWidget(lcd8);
    layout->addWidget(lbl1);
    layout->addWidget(lbl2);

    a=0;
    b=0;
    c=0;
}

Widget::~Widget()
{
}


void Widget :: moveEvent(QMoveEvent *e)
{
    QPoint raspolojenie = e->pos();
    int x = raspolojenie.x();
    int y = raspolojenie.y();
    lcd1 -> display(x);
    lcd2 -> display(y);
}

void Widget :: resizeEvent(QResizeEvent *e)
{
    QSize size = e->size();
    int width = size.width();
    int height = size.height();
    lcd3 -> display(width);
    lcd4 -> display(height);
}

void Widget :: mouseMoveEvent(QMouseEvent *e)
{
    int x_okno = e -> x();
    int y_okno = e -> y();
    int xscreen = e -> globalX();
    int yscreen = e -> globalY();
    lcd5 -> display(x_okno);
    lcd6 -> display(y_okno);
    lcd7 -> display(xscreen);
    lcd8 -> display(yscreen);
}


void Widget :: mousePressEvent(QMouseEvent *e)
{
    if(Qt::LeftButton &e->button())
    {
        a++;
        lbl1->setText(QString::number(a));
    }
    else if(Qt::RightButton &e->button())
    {
        b++;
        lbl2->setText(QString::number(b));
    }
}

void Widget :: keyPressEvent(QKeyEvent *e)
{
    if (e->key() == 0x43 || e->key()==1057) // муторный способ. нашел коды клавиш на рус. и англ. раскладке
    {
        lbl1->setText(QString::number(c));
        a=0;
    }
    else if (Qt::Key_R == e->key())
    {
        lbl2->setText(QString::number(c));
        b=0;
    }
}
