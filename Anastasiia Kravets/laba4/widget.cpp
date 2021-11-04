#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(250, 200);
    label1 = new QLabel("&X", this);
    label2 = new QLabel("&C", this);
    LineEdit = new QLineEdit(this);
    spin = new QSpinBox(this);
    validator = new QIntValidator(0, 99, this);

    label1->move(50, 25);
    label2->move(150, 25);
    LineEdit ->move(50, 75);
    spin->move(95, 125);
    label1->setBuddy(LineEdit);
    label2->setBuddy(spin);

connect(LineEdit, SIGNAL(textEdited(QString)), this, SLOT(setTitleName(QString)));
connect(LineEdit, SIGNAL(textEdited(QString)), this, SLOT(Spin()));
connect(spin, SIGNAL(valueChanged(int)), this, SLOT(setMax(int)));


}

void Widget::Spin(const QString &text) {
    int a = text.toInt();
        spin->setValue(a);

}

void Widget::setMaxim(int k) {

    spin->setMaximum(k);



}

void Widget::setTitleName(const QString &text) {
    setWindowTitle(text);
}



Widget::~Widget()
{
    delete ui;
}

