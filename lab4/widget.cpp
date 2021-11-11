#include "widget.h"

Widget::Widget(QWidget *parent)
    :QWidget(parent)

{
    edit = new QLineEdit(this);
    edit -> move(10,40);
    edit -> resize(70,20);

    spin1 = new QSpinBox(this);
    spin1 -> move(100,40);
    spin1 -> setMaximum(100);
    spin1 -> resize(70,20);

    spin2 = new QSpinBox(this);
    spin2 -> move(175,40);
    spin2 -> setMaximum(100);
    spin2 -> resize(70,20);

    lbl1 = new QLabel("&hello",this);
    lbl1 ->setBuddy(edit);
    lbl1 -> move(10,10);

    lbl2 = new QLabel("H&i",this);
    lbl2 ->setBuddy(spin1);
    lbl2 -> move(100,10);

    lbl3 =new QLabel ("H&ello", this);
    lbl3 ->setBuddy (spin2);
    lbl3 ->move(190,10);

    resize(200,200);

    val = new QIntValidator(1,100,this);
    edit ->setValidator(val);

     connect(spin1,SIGNAL(valueChanged(int)),this,SLOT(setText(int)));
     connect(edit,SIGNAL(textChanged(QString)),this,SLOT(setTitle(QString)));
     connect(spin2,SIGNAL(valueChanged(int)),this,SLOT(setText2(int)));
     connect(spin2,SIGNAL(valueChanged(int)),this,SLOT(setText3(int)));
}

void Widget :: setText(int f)
{
   QString str = QString::number(f , 'n',  0);
   edit -> setText(str);
}

void Widget :: setTitle(const QString &title)
{
    setWindowTitle(title);
}

void Widget :: setText2(int a)
{
    spin1 -> setMinimum(a);
}
void Widget :: setText3(int b)
{
    spin2->setMinimum(b);
}
Widget::~Widget()
{
}
