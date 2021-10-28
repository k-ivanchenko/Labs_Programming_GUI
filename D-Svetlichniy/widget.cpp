#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    lbl= new QLabel("Yes",this);
    lbl->move(110,10);
    btn = new QPushButton("Yes",this);
    btn ->move (110,40);
    btm = new QPushButton("No", this);
    btm ->move (110,70);
    ein = new QCheckBox ("RED", this);
    ein ->move (10,40);
    zwei = new QCheckBox ("YELLOW", this);
    zwei ->move (10,70);
    drei = new QCheckBox ("GREEN", this);
    drei ->move (10,100);
    a = new QRadioButton ("1", this);
    a ->move (10,130);
    b = new QRadioButton ("2", this);
    b ->move (110,130);
    c = new QRadioButton ("3", this);
    c ->move (210,130);

    connect(btn, SIGNAL(clicked()),this, SLOT(setbtn()));
    connect(btm, SIGNAL(clicked()),this, SLOT(setbtm()));

    connect(ein, SIGNAL(clicked()),this, SLOT(setein()));
    connect(zwei, SIGNAL(clicked()),this, SLOT(setzwei()));
    connect(drei, SIGNAL(clicked()),this, SLOT(setdrei()));

    connect(a, SIGNAL(toggled(bool)),this, SLOT(seta()));
    connect(b, SIGNAL(toggled(bool)),this, SLOT(setb()));
    connect(c, SIGNAL(toggled(bool)),this, SLOT(setc()));
}

Widget::~Widget()
{
}
void Widget ::setbtn(){
    lbl->setText("Yes");
     connect(ein, SIGNAL(clicked()),this, SLOT(setein()));
     connect(zwei, SIGNAL(clicked()),this, SLOT(setzwei()));
     connect(drei, SIGNAL(clicked()),this, SLOT(setdrei()));
     connect(a, SIGNAL(toggled(bool)),this, SLOT(seta()));
     connect(b, SIGNAL(toggled(bool)),this, SLOT(setb()));
     connect(c, SIGNAL(toggled(bool)),this, SLOT(setc()));
}
void Widget ::setbtm(){
    lbl->setText("No");
    disconnect(ein, SIGNAL(clicked()),this, SLOT(setein()));
    disconnect(zwei, SIGNAL(clicked()),this, SLOT(setzwei()));
    disconnect(drei, SIGNAL(clicked()),this, SLOT(setdrei()));
    disconnect(a, SIGNAL(toggled(bool)),this, SLOT(seta()));
    disconnect(b, SIGNAL(toggled(bool)),this, SLOT(setb()));
    disconnect(c, SIGNAL(toggled(bool)),this, SLOT(setc()));
}
void Widget ::setein(){
    if(a -> isEnabled()) a -> setEnabled(false);
    else a -> setEnabled(true);
}
void Widget ::setzwei(){
    if(b -> isEnabled()) b -> setEnabled(false);
    else b -> setEnabled(true);
}
void Widget ::setdrei(){
    if(c -> isEnabled()) c -> setEnabled(false);
    else c -> setEnabled(true);
}
void Widget ::seta(){
    if(ein -> isEnabled()) ein -> setEnabled(false);
    else ein -> setEnabled(true);
}
void Widget ::setb(){
    if(zwei -> isEnabled()) zwei -> setEnabled(false);
    else zwei -> setEnabled(true);
}
void Widget ::setc(){
    if(drei -> isEnabled()) drei -> setEnabled(false);
    else drei -> setEnabled(true);
}
