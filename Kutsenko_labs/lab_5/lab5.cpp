#include "lab5.h"

lab5::lab5(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400, 400);

    lcd1 = new QLCDNumber(2, this);
    lcd2 = new QLCDNumber(2, this);
    cmx = new QComboBox(this);
    lst = new QListWidget(this);
    slr1 = new QSlider(Qt::Horizontal, this);
    slr2 = new QSlider(Qt::Horizontal, this);
    lne1 = new QLineEdit(this);
    lne2 = new QLineEdit(this);
    btn1 = new QPushButton("delete from list", this);
    btn2 = new QPushButton("delete from combo list", this);

    lne1->move(0,0);
    lst->move(0, 50);
    slr1->move(0, 100);
    lcd1->move(0,150);
    btn1->move(0, 200);
    lne2->move(200, 0);
    cmx->move(200, 50);
    slr2->move(200,100);
    lcd2->move(200,150);
    btn2->move(200, 200);

    slr1->setTickPosition(QSlider::TicksAbove);
    slr1->setRange(1, 10);

    slr2->setTickPosition(QSlider::TicksAbove);
    slr2->setRange(1,10);

    lcd1->setSegmentStyle(QLCDNumber::Flat);
    lcd2->setSegmentStyle(QLCDNumber::Flat);

    connect(slr1, SIGNAL(valueChanged(int)), this, SLOT(oneLcd(int)));
    connect(slr2, SIGNAL(valueChanged(int)), this, SLOT(twoLcd(int)));
    connect(lne1, SIGNAL(returnPressed()), this, SLOT(addLst()));
    connect(lne2, SIGNAL(returnPressed()), this, SLOT(addCmx()));
    connect(btn1, SIGNAL(clicked()), this, SLOT(delLst()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(delCmx()));


}

void lab5::oneLcd(int val){
    lcd1->display(val);
}

void lab5::twoLcd(int val){
    lcd2->display(val);
}
void lab5::addLst(){
    lst->addItem(lne1->text());
    slr1->setRange(1, lst->count());
    lne1->clear();
}

void lab5::addCmx(){
    cmx->addItem(lne2->text());
    slr2->setRange(1, cmx->count());
    lne2->clear();
}

void lab5::delLst(){
    lst->takeItem(slr1->value()-1);
    slr1->setRange(1, lst->count());
}

void lab5::delCmx(){
    cmx->removeItem(slr2->value()-1);
    slr2->setRange(1, cmx->count());
}

lab5::~lab5()
{
}

