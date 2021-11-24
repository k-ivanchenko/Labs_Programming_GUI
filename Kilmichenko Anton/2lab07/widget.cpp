#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    spin1 = new QSpinBox(this);
    spin1->resize(75, 25);
    spin1->move(50, 175);
    spin1->setFocusPolicy(Qt::NoFocus);
    spin1->setMaximum(9999);

    spin2 = new QSpinBox(this);
    spin2->resize(75, 25);
    spin2->move(250, 175);
    spin2->setFocusPolicy(Qt::NoFocus);
    spin2->setMaximum(9999);


    int y = spin1->y();
    spin2->setValue(y);

    int x = spin2->x();
    spin1->setValue(x);
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    int spin1_x = spin1->x();
    int spin1_y = spin1->y();
    int spin2_x = spin2->x();
    int spin2_y = spin2->y();

    if(a == true)
    {
        if(Qt::Key_W == e->key())
        {
            int newy = spin1_y - 10;
            spin1->move(spin1_x, newy);

            int y = spin1->y();
            spin2->setValue(y);
        }
        else if(Qt::Key_S == e->key())
        {
            int newy = spin1_y + 10;
            spin1->move(spin1_x, newy);

            int y = spin1->y();
            spin2->setValue(y);
        }
        else if(Qt::Key_A == e->key())
        {
            int newx = spin1_x - 10;
            spin1->move(newx, spin1_y);
        }
        else if(Qt::Key_D == e->key())
        {
            int newx = spin1_x + 10;
            spin1->move(newx, spin1_y);
        }
    }
    else if(b == true)
    {
        if(Qt::Key_W == e->key())
        {
            int newy = spin2_y - 10;
            spin2->move(spin2_x, newy);
        }
        else if(Qt::Key_S == e->key())
        {
            int newy = spin2_y + 10;
            spin2->move(spin2_x, newy);
        }
        else if(Qt::Key_A == e->key())
        {
            int newx = spin2_x - 10;
            spin2->move(newx, spin2_y);

            int x = spin2->x();
            spin1->setValue(x);
        }
        else if(Qt::Key_D == e->key())
        {
            int newx = spin2_x + 10;
            spin2->move(newx, spin2_y);

            int x = spin2->x();
            spin1->setValue(x);
        }
    }
}

void Widget::mousePressEvent (QMouseEvent *e)
{
    if (Qt::LeftButton&e->button())
    {
        a = true;
        b = false;
     }
    else if (Qt::RightButton&e->button())
    {
        a = false;
        b = true;
    }
}


Widget::~Widget()
{
}

