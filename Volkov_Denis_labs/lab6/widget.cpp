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


void Widget :: moveEvent(QMoveEvent *t)
{
    QPoint raspolojenie = t->pos();
    int x = raspolojenie.x();
    int y = raspolojenie.y();
    lcd1 -> display(x);
    lcd2 -> display(y);
}

void Widget :: resizeEvent(QResizeEvent *t)
{
    QSize size = t->size();
    int width = size.width();
    int height = size.height();
    lcd3 -> display(width);
    lcd4 -> display(height);
}

void Widget :: mouseMoveEvent(QMouseEvent *t)
{
    int x_okno = t -> x();
    int y_okno = t -> y();
    int xscreen = t -> globalX();
    int yscreen = t -> globalY();
    lcd5 -> display(x_okno);
    lcd6 -> display(y_okno);
    lcd7 -> display(xscreen);
    lcd8 -> display(yscreen);
}


void Widget :: mousePressEvent(QMouseEvent *t)
{
    QString str;
    QString stroka;
    if(Qt::LeftButton &t->button())
    {
        a++;
        str = QString::number(a);
        lbl1->setText(str);
    }
    else if(Qt::RightButton &t->button())
    {
        b++;
        stroka = QString::number(b);
        lbl2->setText(stroka);
    }
}

void Widget :: keyPressEvent(QKeyEvent *t)
{
    QString str2;
    str2=QString::number(c);
    QString str3;
    str3=QString::number(c);
    if (Qt::Key_C == t->key())
    {
        lbl1->setText(str2);
        a=0;
    }
    if (Qt::Key_R == t->key())
    {
        lbl2->setText(str3);
        b=0;
    }
}
