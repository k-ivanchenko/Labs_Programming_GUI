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

    lbl = new QLabel(this);
    lblSlider = new QLabel("1  ", this);
    lcd = new QLCDNumber(10, this);
    lcd->setSegmentStyle(QLCDNumber::Flat);

    lcd->move(100, 10);
    lcd->resize(100, 25);
    slider->move(50, 40);
    lblSlider->move(25, 40);
    btn->move(250, 40);
    lbl->move(250,70);
    lbl->resize(200, 200);
    list1->move(50, 100);
    list1->resize(100, 150);
    list1->addItem(QString::number(-50 + rand()%100));

    connect(btn, SIGNAL(clicked()), this, SLOT(slotBtn()));
    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(slotSlider(int)));
}

Widget::~Widget()
{
}

void Widget::slotBtn(){
    if(btn->text()=="Start")
    {

        btn->setText("Stop");
        int val = (lblSlider->text()).toInt();

        QString str3 = QString::number(val);
        int kolvoq=str3.toInt();


        //QSize size = list1->size();

        for(int j=0; j< kolvoq; j++)
        {
        lbl->setText(list1->item(j)->text()+"\n");
        }
    }

}

void Widget::slotSlider(int val){
    list1->clear();
    QString str2;
    int b = - 50 + rand()%100;
    str2=QString::number(b);
    lblSlider->setText(QString::number(val));
    QString str = QString::number(val);
    int kolvo = str.toInt();
    lcd->display(str);



    int i = 1;
    while (i<=kolvo)
    {
        list1->addItem(str2);
        i++;
    }
}
