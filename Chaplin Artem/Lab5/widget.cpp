#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(600, 500);
    indicator1 = new QLCDNumber(2, this);
    indicator2 = new QLCDNumber(2, this);
    comboBox = new QComboBox(this);
    list = new QListWidget(this);
    slider1 = new QSlider(Qt::Vertical, this);
    slider2 = new QSlider(Qt::Vertical, this);
    lineEdit1 = new QLineEdit(this);
    lineEdit2 = new QLineEdit(this);
    button1 = new QPushButton("button1", this);
    button2 = new QPushButton("button2", this);

    lineEdit1->move(180, 50);
    lineEdit2->move(180, 85);
    indicator1->move(60, 70);
    indicator2->move(380, 70);
    slider1->move(500, 125);
    slider2->move(500, 275);
    comboBox->move(50, 150);
    button1->move(50, 400);
    button2->move(350, 400);
    list->move(180, 150);

    slider1->setTickPosition(QSlider::TicksBothSides);
    slider1->setRange(1, 99);

    slider2->setTickPosition(QSlider::TicksBothSides);
    slider2->setRange(1, 99);

    indicator1->setSegmentStyle(QLCDNumber::Filled);
    indicator2->setSegmentStyle(QLCDNumber::Filled);

    connect(slider1, SIGNAL(valueChanged(int)), this, SLOT(FirstIndicator(int)));
    connect(slider2, SIGNAL(valueChanged(int)), this, SLOT(SecondIndicator(int)));
    connect(lineEdit1, SIGNAL(returnPressed()), this, SLOT(NewComboElement()));
    connect(lineEdit2, SIGNAL(returnPressed()), this, SLOT(NewListElement()));
    connect(button1, SIGNAL(clicked()), this, SLOT(DeleteComboElement()));
    connect(button2, SIGNAL(clicked()), this, SLOT(DeleteListElement()));
}

void Widget::NewComboElement() {
    comboBox->addItem(lineEdit1->text());
    slider1->setRange(1, comboBox->count());
    lineEdit1->clear();
}

void Widget::NewListElement() {
    list->addItem(lineEdit2->text());
    slider2->setRange(1, list->count());
    lineEdit2->clear();
}

void Widget::DeleteComboElement() {
    comboBox->removeItem(slider1->value()-1);
    slider1->setRange(1, comboBox->count());
}

void Widget::DeleteListElement() {
   list->takeItem(slider2->value()-1);
   slider2->setRange(1, list->count());
}

void Widget::FirstIndicator(int i) {
    indicator1->display(i);
}

void Widget::SecondIndicator(int i) {
    indicator2->display(i);
}

Widget::~Widget()
{
    delete ui;
}

