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

    setMouseTracking(true);
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
void Widget :: mouseEvent(QMouseEvent *e)
{
    int x = e -> globalX();
    int y = e -> globalY();
    QString t = QString :: number(x);
    QString k = QString :: number(y);
    lbl_ekrankoord7 -> setText(t);
    lbl_ekrankoord8 -> setText(k);

}

Widget::~Widget()
{
}

