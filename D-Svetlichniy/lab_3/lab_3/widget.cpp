#include "widget.h"

Widget::Widget(QWidget* parent)
    : QWidget(parent)
{
    btn = new QPushButton("Тык", this);
    btn->move(140, 70);
    slide = new QSlider(Qt::Horizontal, this);
    slide->setTickPosition(QSlider::TicksBothSides);
    slide->setTickInterval(2);
    slide->setMinimum(0);
    slide->setMaximum(10);
    slide->move(180, 140);
    list1 = new QListWidget(this);
    list1->addItem("1");
    list1->addItem("2");
    list1->addItem("3");
    list1->addItem("4");

    list1->move(10, 40);
    list1->resize(50, 100);
    list2 = new QListWidget(this);
    list2->addItem("a");
    list2->addItem("b");
    list2->addItem("c");
    list2->addItem("d");

    list2->move(70, 40);
    list2->resize(50, 100);
    lbl = new QLabel("Осторожно - идёт рассчёт!", this);
    lbl->move(10, 10);
    lbl2 = new QLabel("1 ", this);
    lbl2->move(160, 140);
    lcd = new QLCDNumber(10, this);
    lcd->setSegmentStyle(QLCDNumber::Flat);
    lcd->move(220, 70);
    lcd->resize(70, 25);

    connect(btn, SIGNAL(clicked()), this, SLOT(setTuch()));
    connect(slide, SIGNAL(valueChanged(int)), this, SLOT(setSlide(int)));
}

Widget::~Widget()
{
}
void Widget::setTuch() {
    if (btn->text() == "Тык") {
        btn->setText("Double kill");
        lbl->setText("Осторожно - идёт рассчёт!");
        int num = (lbl2->text().toInt());
        time = startTimer(num * 1000);
    }
    else {
        btn->setText("Тык");
        lbl->setText("Рассчёт окончен");
        killTimer(time);
    }
}
void Widget::setSlide(int num) {
    lbl2->setText(QString::number(num));
}
void Widget::timerEvent(QTimerEvent*) {
    int temp = rand() % 4;
    switch (temp) {
    case 0:
        if (list2->item(0)) {
            list1->addItem(list2->item(0)->text());
            lcd->display(list2->item(0)->text().toDouble());
            delete list2->item(0);
        }
        else {
            btn->setText("Тык");
            lbl->setText("Рассчёт окончен");
            killTimer(time);
        }
        break;
    case 1:
        if (list1->item(0)) {
            list2->addItem(list1->item(0)->text());
            lcd->display(list1->item(0)->text().toDouble());
            delete list1->item(0);
        }
        else {
            btn->setText("Тык");
            lbl->setText("Рассчёт окончен");
            killTimer(time);
        }
        break;
    case 2:
        if (list2->item(0)) {
            list1->addItem(list2->item(0)->text());
            lcd->display(list2->item(0)->text().toDouble());
            delete list2->item(0);
        }
        else {
            btn->setText("Тык");
            lbl->setText("Рассчёт окончен");
            killTimer(time);
        }
        break;
    case 3:
        if (list1->item(0)) {
            list2->addItem(list1->item(0)->text());
            lcd->display(list1->item(0)->text().toDouble());
            delete list1->item(0);
        }
        else {
            btn->setText("Тык");
            lbl->setText("Рассчёт окончен");
            killTimer(time);
        }
        break;

    }
