#include "lab7.h"

lab7::lab7(QWidget *parent)
    : QMainWindow(parent)
{
    lcd1 = new QLCDNumber(this);
    lcd2 = new QLCDNumber(this);

    lbl1 = new QLabel("cekf", this);

    lbl1->move(30,30);
    lcd1->move(0,0);
    lcd2->move(100,0);

    lcd1->display(lbl1->pos().x());
    lcd2->display(lbl1->pos().y());

}

void lab7::mouseMoveEvent(QMouseEvent *e){
    bool leftClick = e->buttons() & Qt::LeftButton;
    if(leftClick)
    {
        if((e->pos().x()>=lbl1->pos().x()-20 and e->pos().y()<=lbl1->pos().y()+20 and
            e->pos().x()<=lbl1->pos().x()+20 and e->pos().y()>=lbl1->pos().y()-20)){
            lbl1->move(e->pos().x(), e->pos().y());
            lcd1->display(lbl1->pos().x());
            lcd2->display(lbl1->pos().y());}

        if((e->pos().x()>=lcd1->pos().x()-20 and e->pos().y()<=lcd1->pos().y()+20 and
            e->pos().x()<=lcd1->pos().x()+100 and e->pos().y()>=lcd1->pos().y()-20)){
            lcd1->move(e->pos().x(), e->pos().y());}

        if((e->pos().x()>=lcd2->pos().x()-20 and e->pos().y()<=lcd2->pos().y()+20 and
            e->pos().x()<=lcd2->pos().x()+100 and e->pos().y()>=lcd2->pos().y()-20)){
            lcd2->move(e->pos().x(), e->pos().y());
        }
    }
}

lab7::~lab7()
{
}

