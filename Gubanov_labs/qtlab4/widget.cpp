#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit=new QLineEdit(this);
    edit->move(10,40);
    edit->resize(90,20);
    spin=new QSpinBox(this);
    spin->move(100,40);
    //spin->setMinimum(-100);
   spin->setMaximum(-2);
    spin->setRange(-40,-2);
spin->setSingleStep(1);
    lbl1=new QLabel("&Text",this);
    lbl1->setBuddy(spin);
    lbl1->move(10,10);
    spin->setButtonSymbols(QAbstractSpinBox::PlusMinus);

    lbl2=new QLabel("&Text2",this);
    lbl2->setBuddy(spin);
    lbl2->move(100,10);

    val=new QIntValidator(-50,0,this);
    edit->setValidator(val);

    connect(edit,SIGNAL(textChanged(QString)),this,SLOT(setTitle( const QString &)));
    connect(spin,SIGNAL(valueChanged(int)),edit,SLOT(setTop(int)));

    connect(edit, SIGNAL(textEdited(QString)), this, SLOT(setBt()));


}

void Widget ::setTitle(const QString &title)
{
    setWindowTitle(title);
}
void Widget :: setTop(int b)
{
    spin->setMinimum(b);
    if(b%2==0)
{
        this->setWindowTitle("");
        edit->setText("");

    }
    else
    {
        if(b<=val->top())
        {
            QString str;
            str=QString::number(b);
            this->setWindowTitle(str);
        }
    }
}
void Widget ::setBt(int ){


    QString a =edit->text();
    int b =a.toInt();
    spin->setValue(b);

}

Widget::~Widget()
{
}

