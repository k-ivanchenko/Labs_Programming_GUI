#include "mywidget.h"

myWidget::myWidget(QWidget *parent) : QMainWindow(parent)
{
    btn1 = new QPushButton("Enable" , this);
    btn2 = new QPushButton("Disable" , this);
    lbl = new QLabel("Enable" , this);
    flag1 = new QCheckBox("checkbox1" , this);
    flag2 = new QCheckBox("checkbox2" , this);
    flag3 = new QCheckBox("checkbox3" , this);
    radio1 = new QRadioButton("radio1" , this);
    radio2 = new QRadioButton("radio2" , this);
    radio3 = new QRadioButton("radio3" , this);
    resize(400 , 400);
    btn1->move(10 , 60);
    btn2->move(110 , 60);
    lbl->move(80 , 10);

    flag1->move(10, 100);
    flag2->move(10, 130);
    flag3->move(10, 160);

    radio1->move(100, 100);
    radio2->move(100, 130);
    radio3->move(100, 160);



    connect (btn1 , SIGNAL(clicked()) , this ,SLOT(SetTextEn ()));
    connect (btn2 , SIGNAL(clicked()) , this ,SLOT(SetTextDis ()));

    connect (radio1 ,SIGNAL(clicked()), this ,SLOT(Check1 ()));
    connect (radio2 ,SIGNAL(clicked()), this ,SLOT(Check2 ()));
    connect (radio3 ,SIGNAL(clicked()), this ,SLOT(Check3 ()));

    connect (flag1  ,SIGNAL(clicked()), this ,SLOT(Radio1 ()));
    connect (flag2  ,SIGNAL(clicked()), this ,SLOT(Radio2 ()));
    connect (flag3  ,SIGNAL(clicked()), this ,SLOT(Radio3 ()));
}

    void myWidget::SetTextEn()
    {
        QString str;
        str = "Enable";
        lbl->setText (str);
        connect (radio1 ,SIGNAL(clicked()), this ,SLOT(Check1 ()));
        connect (radio2 ,SIGNAL(clicked()), this ,SLOT(Check2 ()));
        connect (radio3 ,SIGNAL(clicked()), this ,SLOT(Check3 ()));

        connect (flag1  ,SIGNAL(clicked()), this ,SLOT(Radio1 ()));
        connect (flag2  ,SIGNAL(clicked()), this ,SLOT(Radio2 ()));
        connect (flag3  ,SIGNAL(clicked()), this ,SLOT(Radio3 ()));

    }
    void myWidget::SetTextDis()
    {
        QString str;
        str = "Disable";
        lbl->setText (str);

        disconnect (radio1 ,SIGNAL(clicked()), this ,SLOT(Check1 ()));
        disconnect (radio2 ,SIGNAL(clicked()), this ,SLOT(Check2 ()));
        disconnect (radio3 ,SIGNAL(clicked()), this ,SLOT(Check3 ()));

        disconnect (flag1  ,SIGNAL(clicked()), this ,SLOT(Radio1 ()));
        disconnect (flag2  ,SIGNAL(clicked()), this ,SLOT(Radio2 ()));
        disconnect (flag3  ,SIGNAL(clicked()), this ,SLOT(Radio3 ()));
    }
    void myWidget::Check1()
    {
        flag2->setCheckState(Qt::Unchecked);
        flag3->setCheckState(Qt::Unchecked);

        flag1->setCheckState(Qt::Checked);
    }
    void myWidget::Check2()
    {
        flag1->setCheckState(Qt::Unchecked);
        flag3->setCheckState(Qt::Unchecked);

        flag2->setCheckState(Qt::Checked);
    }
    void myWidget::Check3()
    {
        flag1->setCheckState(Qt::Unchecked);
        flag2->setCheckState(Qt::Unchecked);

        flag3->setCheckState(Qt::Checked);
    }

    void myWidget::Radio1(){
        if(flag1->isChecked()){
            radio2->setEnabled(false);
        }else{
            radio2->setEnabled(true);
        }
    }


    void myWidget::Radio2(){
        if(flag2->isChecked()){
            radio3->setEnabled(false);
        }else{
            radio3->setEnabled(true);
        }
    }
     void myWidget::Radio3(){
         if(flag3->isChecked()){
             radio1->setEnabled(false);
         }else{
             radio1->setEnabled(true);
         }
     }



myWidget::~myWidget()
{
}

