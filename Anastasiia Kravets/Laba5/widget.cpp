#include "widget.h"
#include "ui_widget.h"

    Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(400, 400);


    lcd = new QLCDNumber(2, this);
    list = new QListWidget(this);
    slider = new QSlider(Qt::Vertical, this);
    label = new QLabel("HELP",this);
    button = new QPushButton("PRESS", this);
    QString str1=("");

    list->move(10, 100);
    label->move(10, 30);
    lcd->move(300, 200);
    slider->move(300, 100);
    button->move(10, 325);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setRange(0, 99);



    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(LCDAD(int)));

    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(LC(int)));
    connect(button, SIGNAL(clicked()), this, SLOT(SHOW()));

}
    void Widget::LCDAD(int r) {
    list->clear();
       for(int i=0;i<r;i++){
        int random_value = rand() % 100;
    list->addItem(QString::number(random_value));

       }
            };



    void Widget::LC(int i) {

      lcd->display(i);
            }


    void Widget::SHOW() {

        for(int i=0; i<list->count();i++){

       str1=list->item(i)->text();
       QString str=str1+item(i)->text();
       this->label->setText(str);
         }







};


Widget::~Widget()
{
    delete ui;
}
