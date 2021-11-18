#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    lbl= new QLabel("            ",this);
    lbl->move(100,10);
    zero = new QPushButton("0",this);
    zero ->move (10,40);
    one = new QPushButton("1",this);
    one ->move (10,70);
    two = new QPushButton("2", this);
    two ->move (10,100);
    three = new QPushButton("3",this);
    three ->move (10,130);
    four = new QPushButton("4",this);
    four ->move (10,160);
    five = new QPushButton("5",this);
    five ->move (10,190);
    six = new QPushButton("6",this);
    six ->move (10,220);
    seven = new QPushButton("7",this);
    seven ->move (10,250);
    eight = new QPushButton("8",this);
    eight ->move (10,280);
    nine = new QPushButton("9",this);
    nine ->move (10,310);
    clear = new QPushButton("clear", this);
    clear ->move (10,340);

    box = new QCheckBox ("Permission", this);
    box ->move (100,40);

    connect(zero, SIGNAL(clicked()),this, SLOT(setzero()));
    connect(one, SIGNAL(clicked()),this, SLOT(setone()));
    connect(two, SIGNAL(clicked()),this, SLOT(settwo()));
    connect(three, SIGNAL(clicked()),this, SLOT(setthree()));
    connect(four, SIGNAL(clicked()),this, SLOT(setfour()));
    connect(five, SIGNAL(clicked()),this, SLOT(setfive()));
    connect(six, SIGNAL(clicked()),this, SLOT(setsix()));
    connect(seven, SIGNAL(clicked()),this, SLOT(setseven()));
    connect(eight, SIGNAL(clicked()),this, SLOT(seteight()));
    connect(nine, SIGNAL(clicked()),this, SLOT(setnine()));
    connect(clear, SIGNAL(clicked()),this, SLOT(setclear()));

    connect(box, SIGNAL(clicked()),this, SLOT(setbox()));
}

Widget::~Widget()
{
}
void Widget ::setbox(){
    lbl->setText("Banned");
    if(zero -> isEnabled()) zero -> setEnabled(false);
    else zero -> setEnabled(true);
    if(one -> isEnabled()) one -> setEnabled(false);
    else one -> setEnabled(true);
    if(two -> isEnabled()) two -> setEnabled(false);
    else two -> setEnabled(true);
    if(three -> isEnabled()) three -> setEnabled(false);
    else three -> setEnabled(true);
    if(four -> isEnabled()) four -> setEnabled(false);
    else four -> setEnabled(true);
    if(five -> isEnabled()) five -> setEnabled(false);
    else five -> setEnabled(true);
    if(six -> isEnabled()) six -> setEnabled(false);
    else six -> setEnabled(true);
    if(seven -> isEnabled()) seven -> setEnabled(false);
    else seven -> setEnabled(true);
    if(eight -> isEnabled()) eight -> setEnabled(false);
    else eight -> setEnabled(true);
    if(nine -> isEnabled()) nine -> setEnabled(false);
    else nine -> setEnabled(true);
    if(clear -> isEnabled()) clear -> setEnabled(false);
    else clear -> setEnabled(true);
}
void Widget ::setzero(){
    lbl->setText("0");
connect(zero, SIGNAL(clicked()),this, SLOT(setzero()));
}
void Widget ::setone(){
    lbl->setText("1");
connect(one, SIGNAL(clicked()),this, SLOT(setone()));
}
void Widget ::settwo(){
    lbl->setText("2");
connect(two, SIGNAL(clicked()),this, SLOT(settwo()));
}
void Widget ::setthree(){
    lbl->setText("3");
connect(three, SIGNAL(clicked()),this, SLOT(setthree()));
}
void Widget ::setfour(){
    lbl->setText("4");
connect(four, SIGNAL(clicked()),this, SLOT(setfour()));
}
void Widget ::setfive(){
    lbl->setText("5");
connect(five, SIGNAL(clicked()),this, SLOT(setfive()));
}
void Widget ::setsix(){
    lbl->setText("6");
connect(six, SIGNAL(clicked()),this, SLOT(setsix()));
}
void Widget ::setseven(){
    lbl->setText("7");
connect(seven, SIGNAL(clicked()),this, SLOT(setseven()));
}
void Widget ::seteight(){
    lbl->setText("8");
connect(eight, SIGNAL(clicked()),this, SLOT(seteight()));
}
void Widget ::setnine(){
    lbl->setText("9");
connect(nine, SIGNAL(clicked()),this, SLOT(setnine()));
}


void Widget ::setclear(){
    QString new_lbl;
    this->lbl->setText(new_lbl);
    lbl->setText("Clear");
connect(clear, SIGNAL(clicked()),this, SLOT(setclear()));
}
