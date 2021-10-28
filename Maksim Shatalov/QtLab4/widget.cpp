#include "widget.h"
#include "ui_widget.h"
#include<QApplication>
#include<QtWidgets>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
 edit = new QLineEdit(this);
  edit->move(10,10);

spnbx = new QSpinBox(this);
spnbx->move(10,40);

lbl1 = new QLabel("Надпись 1", this);
lbl1->move(10,70);
lbl2 = new QLabel("Надпись 2", this);
lbl2->move(10,100);
connect(spnbx, qOverload<int>(&QSpinBox::valueChanged),
  lbl1, qOverload<int>(&QLabel::setNum));

connect(edit, SIGNAL(textChanged(QString)), lbl2, SLOT(setText(QString)));



}


Widget::~Widget()
{

}

