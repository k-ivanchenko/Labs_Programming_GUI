#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit = new QLineEdit(this);
    edit -> move(10,40);

    spin = new QSpinBox(this);
    spin -> move(100,40);
    spin -> setMaximum(10);

    lbl1 = new QLabel("&hello",this);
    lbl1 ->setBuddy(edit);
    lbl1 -> move(10,10);

    lbl2 = new QLabel("H&i",this);
    lbl2 ->setBuddy(spin);
     lbl2 -> move(100,10);

    val = new QIntValidator(1,10,this);
    edit ->setValidator(val);


    connect(edit,SIGNAL(textChanged(QString)),this,SLOT(setTitle(QString)));
    connect(spin,SIGNAL(valueChanged(int)),this,SLOT(setTop(int)));
   connect(spin,SIGNAL(valueChanged(int)),this,SLOT(setTet(int)));


}
void Widget :: setTitle(const QString &title)
{
    setWindowTitle(title);
}

void Widget :: setTop(int a)
{
    spin -> setMinimum(a);
}
void Widget :: setTet(int b)
{
   QString str = QString::number(b , 'g',  0);
   edit -> setText(str);
}

Widget::~Widget()
{
}

