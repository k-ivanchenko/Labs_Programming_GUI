#include "widget.h"

Widget::Widget(QWidget *parent)
    :QWidget(parent)

{
    edit = new QLineEdit(this);
    edit -> move(10,40);
    edit -> resize(70,20);

    box = new QSpinBox(this);
    box -> move(100,40);
    box -> setMaximum(1000);
    box -> resize(70,20);

    lbl1 = new QLabel("&A",this);
    lbl1 ->setBuddy(edit);
    lbl1 -> move(10,10);

    lbl2 = new QLabel("&S",this);
    lbl2 ->setBuddy(box);
    lbl2 -> move(100,10);

    resize(200,200);

    valor= new QIntValidator(0,1000,this);
    edit ->setValidator(valor);

     connect(box,SIGNAL(valueChanged(int)),this,SLOT(setbox(int)));
     connect(edit,SIGNAL(textChanged(QString)),this,SLOT(setedit(QString)));


}
void Widget :: setbox(int number){
    valor->setTop(number);
    edit->setValidator(valor);
}

void Widget :: setedit(const QString &title){
     setWindowTitle(title);
}
Widget::~Widget()
{
}
