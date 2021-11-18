#include "widget.h"

Widget:: Widget(QWidget *parent)
    : QWidget(parent)
{
    lbl_rasmer1 = new QLabel(this);
    lbl_rasmer2 = new QLabel(this);
    lbl_okno3 = new QLabel(this);
    lbl_okno4 = new QLabel(this);
    lbl_oknokoord5 = new QLabel(this);
    lbl_oknokoord6 = new QLabel(this);
    lbl_ekrankoord7 = new QLabel(this);
    lbl_ekrankoord8 = new QLabel(this);

    layout= new QBoxLayout(QBoxLayout::TopToBottom,this);
    layout ->addWidget(lbl_rasmer1);
    layout ->addWidget(lbl_rasmer2);
    layout ->addWidget(lbl_okno3);
    layout ->addWidget(lbl_okno4);
    layout ->addWidget(lbl_oknokoord5);
    layout ->addWidget(lbl_oknokoord6);
    layout ->addWidget(lbl_ekrankoord7);
    layout ->addWidget(lbl_ekrankoord8);

    lcdlevo = new QLCDNumber (this);
    lcdlevo -> move(120,70);
    lcdpravo = new QLCDNumber(this);
    lcdpravo -> move(120,100);

    setMouseTracking(false);
    resize(500,500);
}

void Widget :: resizeEvent(QResizeEvent *e)
{
    QSize size = e -> size();
    int w = size.width();
    int h = size.height();
    QString a =QString :: number(w);
    QString b =QString :: number(h);
    lbl_rasmer1 -> setText(a);
    lbl_rasmer2 -> setText(b);
}
 void Widget :: moveEvent(QMoveEvent *e)
 {
     QPoint pos = e -> pos();
     int x = pos.x();
     int y = pos.y();
     QString c =QString :: number(x);
     QString d =QString :: number(y);
     lbl_okno3 -> setText(c);
     lbl_okno4 -> setText(d);
 }
void Widget :: mouseMoveEvent(QMouseEvent *e)
{
    int okno_x = e -> x();
    int okno_y = e -> y();
    int glob_x = e -> globalX();
    int glob_y = e -> globalY();
    QString t = QString :: number(glob_x);
    QString k = QString :: number(glob_y);
    QString n = QString :: number(okno_x);
    QString m = QString :: number(okno_y);
    lbl_oknokoord5 -> setText(n);
    lbl_oknokoord6 -> setText(m);
    lbl_ekrankoord7 -> setText(t);
    lbl_ekrankoord8 -> setText(k);

}
void Widget :: mousePressEvent(QMouseEvent *e)
{
    if(Qt :: RightButton &e -> button())
        lcdpravo -> display(lcdpravo -> value()+1);
    if(Qt :: LeftButton &e -> button())
        lcdlevo -> display(lcdlevo -> value()+1);
}

void Widget :: keyPressEvent(QKeyEvent *e)
{
    if (Qt :: Key_L == e -> key())
        lcdlevo -> display(0);
    if (Qt :: Key_R == e -> key())
        lcdpravo -> display(0);
}

Widget::~Widget()
{
}

