#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit1 = new QLineEdit(this);
    edit2 = new QLineEdit(this);

    edit1->resize(100, 25);
    edit2->resize(100, 25);

    edit1->move(100, 100);
    edit2->move(100, 150);

    connect(edit1, SIGNAL(textChanged(QString)), this, SLOT(slotEdit1(QString)));
    connect(edit2, SIGNAL(textChanged(QString)), this, SLOT(slotEdit2(QString)));

    setMouseTracking(true);
}

Widget::~Widget()
{
}

void Widget::slotEdit1(QString val){
    edit2->move(edit2->x(), val.toInt());
}

void Widget::slotEdit2(QString val){
    edit1->move(edit1->x(), val.toInt());
}

void Widget::mouseMoveEvent(QMouseEvent *e){
    bool leftClick = e->buttons() & Qt::LeftButton;

    if(leftClick && (e->x() >= edit1->x() && e->x() <= edit1->x()+120) && (e->y() >= edit1->y() && e->y() <= edit1->x()+45)){
        edit1->move(e->x()-100, e->y()-25);
    }

    else if(leftClick && (e->x() >= edit2->x() && e->x() <= edit2->x()+120) && (e->y() >= edit2->y() && e->y() <= edit2->x()+45)){ //не работает
        edit2->move(e->x()-100, e->y()-25);
    }
}


