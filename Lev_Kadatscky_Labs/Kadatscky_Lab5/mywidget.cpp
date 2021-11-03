#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(600, 600);
    lcd1 = new QLCDNumber(this);
    lcd2 = new QLCDNumber(this);
    l = new QListWidget(this);
    com = new QComboBox(this);
    s1 = new QSlider(this);
    s2 = new QSlider(this);
    text1 = new QLineEdit(this);
    text2 = new QLineEdit(this);
    btn1 = new QPushButton("Button1", this);
    btn2 = new QPushButton("Button2", this);

    lcd1 -> move(10, 40);
    lcd2 -> move(10, 70);
    l -> move(10, 100);
    com -> move(300, 40);
    s1 -> move(300, 100);
    s2 -> move(400, 100);
    text1 -> move(10, 400);
    text2 -> move(300, 400);
    btn1 -> move(300, 450);
    btn2 -> move(400,450);

    connect(text1, SIGNAL(returnPressed()), this, SLOT(Set_list()));
    connect(text2, SIGNAL(returnPressed()), this, SLOT(Set_Combo()));
    connect(btn1, SIGNAL(pressed()), this, SLOT(delete1()));
    connect(btn2, SIGNAL(pressed()), this, SLOT(delete2()));
    connect(s1, SIGNAL(valueChanged(int)), this, SLOT(pos1(int)));
    connect(s2, SIGNAL(valueChanged(int)), this, SLOT(pos2(int)));
}

void MyWidget :: Set_list(){
    QString t = text1-> text();
    l -> addItem(t);
    int count = l -> count();
    s1 -> setRange(0, count - 1);
}

void MyWidget :: Set_Combo(){
    QString t = text2 -> text();
    com -> addItem(t);
    int count = com -> count();
    s2 -> setRange(0, count - 1);
}

void MyWidget :: delete1(){
    int v = lcd1 -> value();
    l -> takeItem(v);
    int count = l -> count();
    s1 -> setRange(0, count - 1);
}

void MyWidget :: delete2(){
    int v = lcd2 -> value();
    com -> removeItem(v);
    int count = com -> count();
    s2 -> setRange(0, count - 1);
}

void MyWidget :: pos1(int p){
    lcd1 -> display(p);
}

void MyWidget :: pos2(int p){
    lcd2 -> display(p);
}


MyWidget::~MyWidget()
{
}

