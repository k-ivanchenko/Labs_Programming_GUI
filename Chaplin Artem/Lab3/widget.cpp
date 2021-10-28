#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(400, 400);
    label1 = new QLabel("Enabled", this);
    button1 = new QPushButton("Button 1", this);
    button2 = new QPushButton("Button 2", this);
    flag1 = new QCheckBox("Flag 1", this);
    flag2 = new QCheckBox("Flag 2", this);
    flag3 = new QCheckBox("Flag 3", this);
    rdbt1 = new QRadioButton("RadioButton 1", this);
    rdbt2 = new QRadioButton("RadioButton 2", this);
    rdbt3 = new QRadioButton("RadioButton 3", this);

    label1 -> move(175, 50);
    button1 -> move(50, 100);
    button2 -> move(50, 135);
    flag1 -> move(175, 100);
    flag2 -> move(175, 120);
    flag3 -> move(175, 140);
    rdbt1 -> move(250, 100);
    rdbt2 -> move(250, 120);
    rdbt3 -> move(250, 140);

    connect(rdbt1, SIGNAL(clicked()), this, SLOT(RButton1()));
    connect(rdbt2, SIGNAL(clicked()), this, SLOT(RButton2()));
    connect(rdbt3, SIGNAL(clicked()), this, SLOT(RButton3()));

    connect(flag1, SIGNAL(released()), this, SLOT(CBox1()));
    connect(flag2, SIGNAL(released()), this, SLOT(CBox2()));
    connect(flag3, SIGNAL(released()), this, SLOT(CBox3()));

    connect(flag1, SIGNAL(toggled(false)), this, SLOT(CBox1()));
    connect(flag2, SIGNAL(toggled()), this, SLOT(CBox2()));
    connect(flag3, SIGNAL(toggled()), this, SLOT(CBox3()));

    connect(button1, SIGNAL(clicked()), this, SLOT(Enabled()));
    connect(button2, SIGNAL(clicked()), this, SLOT(Disabled()));
}

void Widget::RButton1() {
    if(rdbt1->isChecked()){
        flag1->setChecked(true);
        flag2->setChecked(false);
        flag3->setChecked(false);
    }
    else {
        flag1->setChecked(false);
    }
}

void Widget::RButton2() {
    if(rdbt2->isChecked()){
        flag1->setChecked(false);
        flag2->setChecked(true);
        flag3->setChecked(false);
    }
    else {
        flag2->setChecked(false);
    }
}

void Widget::RButton3() {
    if(rdbt3->isChecked()){
        flag1->setChecked(false);
        flag2->setChecked(false);
        flag3->setChecked(true);
    }
    else {
        flag3->setChecked(false);
    }
}

void Widget::CBox1() {
    if(flag1->isChecked()) {
        rdbt2->setEnabled(false);
    }
    else {
        rdbt2->setEnabled(true);
    }
}

void Widget::CBox2() {
    if(flag2->isChecked()) {
        rdbt3->setEnabled(false);
    }
    else {
        rdbt3->setEnabled(true);
    }
}

void Widget::CBox3() {
    if(flag3->isChecked()) {
        rdbt1->setEnabled(false);
    }
    else {
        rdbt1->setEnabled(true);
    }
}

void Widget::Enabled() {
    label1->setText("Enable");
    flag1->setEnabled(true);
    flag2->setEnabled(true);
    flag3->setEnabled(true);
    rdbt1->setEnabled(true);
    rdbt2->setEnabled(true);
    rdbt3->setEnabled(true);
}

void Widget::Disabled() {
    label1->setText("Diable");
    flag1->setEnabled(false);
    flag2->setEnabled(false);
    flag3->setEnabled(false);
    rdbt1->setEnabled(false);
    rdbt2->setEnabled(false);
    rdbt3->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

