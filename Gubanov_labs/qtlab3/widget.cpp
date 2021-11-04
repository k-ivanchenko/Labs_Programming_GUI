#include "widget.h"
#include <QCoreApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{


button1=new QPushButton("Обновить",this);

button2=new QPushButton("Закрыть",this);
lbl = new QLabel("all flags unchecked" , this);
flag1 = new QCheckBox("checkbox1" , this);
flag2 = new QCheckBox("checkbox2" , this);
flag3 = new QCheckBox("checkbox3" , this);
radio1 = new QRadioButton("radio1" , this);
radio2 = new QRadioButton("radio2" , this);
radio3 = new QRadioButton("radio3" , this);
resize(400 , 400);
button1->move(10 , 60);
button2->move(110 , 60);
lbl->move(80 , 10);
lbl->resize(500,50);


flag1->move(10, 100);
flag2->move(10, 130);
flag3->move(10, 160);

radio1->move(120, 100);
radio2->move(120, 130);
radio3->move(120, 160);

connect (button1 , SIGNAL(clicked()) , this ,SLOT(SetTextBegin ()));
connect (button2 , SIGNAL(clicked()) , this ,SLOT(SetTextDis ()));

connect (radio1 ,SIGNAL(clicked()), this ,SLOT(Check1 ()));
connect (radio2 ,SIGNAL(clicked()), this ,SLOT(Check2 ()));
connect (radio3 ,SIGNAL(clicked()), this ,SLOT(Check3 ()));

connect (flag1  ,SIGNAL(clicked()), this ,SLOT(Radio1 ()));
connect (flag2  ,SIGNAL(clicked()), this ,SLOT(Radio2 ()));
connect (flag3  ,SIGNAL(clicked()), this ,SLOT(Radio3 ()));



}


void Widget::SetTextBegin()
{
    QString str;
    str = "Обновлено все unchecked";
    lbl->setText (str);
    flag1->setEnabled(true);
    flag2->setEnabled(true);
    flag3->setEnabled(true);

    radio1->setEnabled(true);
    radio2->setEnabled(true);
    radio3->setEnabled(true);


 /*   if (flag1->isChecked()&&flag2->isChecked()&&flag3->isChecked()){
        str="flag1-checked flag2-checked flag3 -checked";
        lbl->setText(str);
    }

    if(flag1->isChecked())
    {
        str="flag1-checked";
        lbl->setText(str);
    }

  else if(flag1->isChecked() && flag2->isChecked()) {

       str="flag1-checked || flag2-checked || flag3 -unchecked"
           "radio1-on ";
       lbl->setText(str);

  }
   else if(flag2->isChecked() && flag3->isChecked()) {
        str="flag1-unchecked || flag2-checked || flag3 -checked";
        lbl->setText(str);

   }
    else if(flag1->isChecked() && flag3->isChecked()) {
        str="flag1-checked || flag2-unchecked || flag3 -checked";
        lbl->setText(str);

   }
    else if(flag1->isChecked()) {
        str="flag1-checked || flag2-unchecked || flag3 -unchecked";
        lbl->setText(str);

   }
    else if(flag2->isChecked()) {
        str="flag1-unchecked || flag2-checked || flag3 -unchecked";
        lbl->setText(str);

   }
    else if(flag3->isChecked() ) {
        str="flag1-unchecked || flag2-unchecked || flag3-checked";
        lbl->setText(str);

   }
     if(radio1->isChecked()&& flag1->isChecked()){
        str="radio1-on flag1-check";
        lbl->setText(str);
    }
     if(radio2->isChecked()&& flag2->isChecked()){
        str="radio2-on flag2-check";
        lbl->setText(str);
    }
     if(radio3->isChecked()&&flag3->isChecked()){
        str="radio3-on flag3-check";
        lbl->setText(str);
    }
      else if(radio3->isChecked()&&flag3->isChecked() &&flag2->isChecked() &&flag1->isChecked()){
        str="radio3-on flag3-check flag2-check flag1-check";
        lbl->setText(str);
    }
*/
}

void Widget::SetTextDis()
{
    QString str;
    str = "Closed";
    lbl->setText (str);

    flag1->setEnabled(true);
    flag2->setEnabled(false);
    flag3->setEnabled(false);

    radio1->setEnabled(false);
    radio2->setEnabled(false);
    radio3->setEnabled(false);


}
void Widget::Check1()
{
    if(flag1->isTristate()) lbl->setText("flag1-checked");
    else lbl->setText("flag1 unchecked");
    if(flag1->isChecked()&&flag2->isChecked())
        lbl->setText("flag1-checked flag2-checked");
    else lbl->setText("flag1 unchecked flag2 unchecked");

    if(flag1->isChecked()&&flag3->isChecked())
        lbl->setText("flag1-checked flag3-checked");
    else lbl->setText("flag1-unchecked flag3-unchecked");
    if(flag1->isChecked()&&flag2->isChecked()&&flag3->isChecked())
        lbl->setText("flag1-checked flag2-checked flag3-checked");
    else lbl->setText("flag1 unchecked flag2 unchecked flag3 unchecked");

    //flag2->setCheckState(Qt::Unchecked);
    //flag3->setCheckState(Qt::Unchecked);


    //flag1->setCheckState(Qt::Checked);

}
void Widget::Check2()
{
    if(flag2->isChecked()) lbl->setText("flag2-checked");
    else lbl->setText("flag2 unchecked");
  // flag1->setCheckState(Qt::Unchecked);
    //flag3->setCheckState(Qt::Unchecked);
//    flag2->setCheckState(Qt::Checked);
    if(flag2->isChecked()&&flag3->isChecked())
        lbl->setText("flag2-checked flag3-checked");
    else lbl->setText("flag2-unchecked flag3-unchecked");
    if(flag1->isChecked()&&flag2->isChecked()&&flag3->isChecked())
        lbl->setText("flag1-checked flag2-checked flag3-checked");
    else lbl->setText("flag1 unchecked flag2 unchecked flag3 unchecked");
}
void Widget::Check3()
{
    if(flag3->isChecked()) lbl->setText("flag3-checked");
    else lbl->setText("flag3 unchecked");
    if(flag2->isChecked()&&flag3->isChecked())
        lbl->setText("flag2-checked flag3-checked");
    if(flag1->isChecked()&&flag3->isChecked())
        lbl->setText("flag1-checked flag3-checked");
    if(flag1->isChecked()&&flag2->isChecked()&&flag3->isChecked())
        lbl->setText("flag1-checked flag2-checked flag3-checked");
    else lbl->setText("flag1 unchecked flag2 unchecked flag3 unchecked");
  //  flag1->setCheckState(Qt::Unchecked);
  //  flag2->setCheckState(Qt::Unchecked);
    //flag3->setCheckState(Qt::Checked);
}

void Widget::Radio1(){
    if(radio1->isChecked()) lbl->setText("radio1-checked flag 1 checked");
    else lbl->setText("radio1 unchecked");
}


void Widget::Radio2(){
    if(radio2->isChecked()) lbl->setText("radi2-checked flag 2checked");
    else lbl->setText("radio2 unchecked");
}


 void Widget::Radio3(){
     if(radio3->isChecked()) lbl->setText("radio3-checked flag 3 checked");
     else lbl->setText("radio3 unchecked");
 }







Widget::~Widget()
{
}



