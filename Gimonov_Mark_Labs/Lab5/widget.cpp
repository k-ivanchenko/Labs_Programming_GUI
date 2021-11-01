#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn = new QPushButton("Start", this);
    slider = new QSlider(Qt::Horizontal, this);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setTickInterval(1);
    slider->setMinimum(1);
    slider->setMaximum(10);
    list1 = new QListWidget(this);
    list2 = new QListWidget(this);
    lbl = new QLabel("  ", this);
    lblSlider = new QLabel("1  ", this);
    lcd = new QLCDNumber(0, this);

    list1->addItem("1.1");
    list1->addItem("2.1");
    list1->addItem("3.1");
    list1->addItem("4.1");

    list2->addItem("1.2");
    list2->addItem("2.2");
    list2->addItem("3.2");
    list2->addItem("4.2");

    lcd->move(100, 10);
    lcd->resize(200, 25);
    slider->move(50, 40);
    lblSlider->move(25, 40);
    btn->move(250, 40);
    lbl->move(100,70);
    lbl->resize(200, 18);
    list1->move(50, 100);
    list1->resize(100, 150);
    list2->move(200, 100);
    list2->resize(100, 150);

    connect(btn, SIGNAL(clicked()), this, SLOT(slotBtn()));
    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(slotSlider(int)));
}

Widget::~Widget()
{
}

void Widget::slotBtn(){
    if(btn->text() == "Start"){
        btn->setText("Stop");
        lbl->setText("Осторожно - идет расчет!");
        int val = (lblSlider->text()).toInt();
        timer = startTimer(val*1000);
    }
    else{
        btn->setText("Start");
        lbl->setText("Расчет окончен");
        killTimer(timer);
    }

}

void Widget::slotSlider(int val ){
    lblSlider->setText(QString::number(val));
}

void Widget::timerEvent(QTimerEvent*){
    int temp = rand() % 4;
    switch(temp){
    case 0:
        if(list2->item(0)){
            list1->addItem(list2->item(0)->text());
            lcd->display(list2->item(0)->text().toDouble()); // не работает
            delete list2->item(0);
        }
        else{
            btn->setText("Start");
            lbl->setText("Расчет окончен");
            killTimer(timer);
        }
        break;
    case 1:
        if(list1->item(0)){
            list2->addItem(list1->item(0)->text());
            lcd->display(list1->item(0)->text().toDouble());
            delete list1->item(0);
        }
        else{
            btn->setText("Start");
            lbl->setText("Расчет окончен");
            killTimer(timer);
        }
        break;
    case 2:
        if(list2->item(0)){
            list1->addItem(list2->item(0)->text());
            lcd->display(list2->item(0)->text().toDouble());
            delete list2->item(0);
        }
        else{
            btn->setText("Start");
            lbl->setText("Расчет окончен");
            killTimer(timer);
        }
        break;
    case 3:
        if(list1->item(0)){
            list2->addItem(list1->item(0)->text());
            lcd->display(list1->item(0)->text().toDouble());
            delete list1->item(0);
        }
        else{
            btn->setText("Start");
            lbl->setText("Расчет окончен");
            killTimer(timer);
        }
        break;
    }
}

