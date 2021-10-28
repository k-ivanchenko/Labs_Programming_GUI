#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(400, 200);
    label1 = new QLabel("&z - (Line Edit)", this);
    label2 = new QLabel("&x - (Spin Box 1)", this);
    label3 = new QLabel("&c - (Spin Box 2)", this);
    LineEdit1 = new QLineEdit(this);
    spin1 = new QSpinBox(this);
    spin2 = new QSpinBox(this);
    validator = new QIntValidator(0, 99, this);

    label1->move(50, 25);
    label2->move(150, 25);
    label3->move(260, 25);
    LineEdit1 ->move(125, 75);
    spin1->move(125, 125);
    spin2->move(225, 125);

    label1->setBuddy(LineEdit1);
    label2->setBuddy(spin1);
    label3->setBuddy(spin2);

    connect(spin1, SIGNAL(valueChanged(QString)), LineEdit1, SLOT(setText(QString)));
    connect(spin1, SIGNAL(valueChanged(QString)), this, SLOT(setTitle(QString)));
    connect(spin2, SIGNAL(valueChanged(int)), this, SLOT(setMax(int)));
    connect(LineEdit1, SIGNAL(textEdited(QString)), this, SLOT(setSpinValue(QString)));
}

void Widget::setSpinValue(const QString &text) {
    int a = text.toInt();
    spin1->setValue(a);
}

void Widget::setMax(int i) {
    spin1->setMaximum(i);
    validator->setTop(i);
    LineEdit1->setValidator(validator);
}

void Widget::setTitle(const QString &text) {
    setWindowTitle(text);
}

Widget::~Widget()
{
    delete ui;
}

