#include "indicator.h"

indicator::indicator(QWidget *parent): QMainWindow(parent)
{
    box1 = new QGroupBox(this);
    box1->resize(300 , 400);
    box1->move(30 , 50);

    btn1 = new QPushButton("Кнопка 1" , box1);
    btn1->move(50 , 20);

    num1 = new QLCDNumber(5 , box1);
    num1->move(50 , 60);
    slider1 = new QSlider(Qt::Horizontal , box1 );
    slider1->move(50 , 120);
    slider1->setTickPosition(QSlider::TicksBelow);
    slider1->setSingleStep(1);
    slider1->setRange(0 , 10);
    linE1 = new QLineEdit(box1);
    linE1->move(50 , 175);
    list = new QListWidget(box1);
    list->move(50 , 250);
    list->resize(150,100);
    resize(900 ,500);


    box2 = new QGroupBox(this);
    box2->resize(300 , 400);
    box2->move(400,50);
    btn2 = new QPushButton("Кнопка 2" , box2);
    btn2->move(50 , 20);
    num2 = new QLCDNumber(5 , box2);
    num2->move(50 , 60);

    slider2 = new QSlider(Qt::Horizontal , box2 );
    slider2->move(50 , 120);
    slider2->setTickPosition(QSlider::TicksBelow);
    slider2->setSingleStep(1);
    slider2->setRange(0 , 10);
    linE2 = new QLineEdit(box2);
    linE2->move(50 , 175);
    combo = new QComboBox(box2);
    combo->move(50 , 250);
    combo->resize(150,20);
    resize(900 ,500);

    connect(linE1 , SIGNAL(returnPressed()), this,SLOT(addItemL()));
    connect(linE2 , SIGNAL(returnPressed()), this,SLOT(addItemC()));
    connect(slider1 , SIGNAL(valueChanged(int)) , this , SLOT(displyNum1(int)));
    connect(slider2 , SIGNAL(valueChanged(int)) , this , SLOT(displyNum2(int)));

    connect(btn1 , SIGNAL(clicked()) , this , SLOT(removeItem1()));
    connect(btn2 , SIGNAL(clicked()) , this , SLOT(removeItem2()));
 }
void indicator::addItemL(){
    QString b = linE1->text();
    list->addItem(b);
}
void indicator::addItemC(){
    QString b = linE2->text();
    combo->addItem(b);
}
void indicator::displyNum1(int a){
    num1->display(a);
     val1 = a;
}
void indicator::displyNum2(int b){
    num2->display(b);
     val2 = b;
}
void indicator::removeItem1(){
   list->takeItem(val1);
}
void indicator::removeItem2(){
   combo->removeItem(val2);
}

indicator::~indicator()
{
}

