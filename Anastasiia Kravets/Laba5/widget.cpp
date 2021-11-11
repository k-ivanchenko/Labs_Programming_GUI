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

    list->move(10, 100);
    label->move(10, 30);
    lcd->move(300, 200);
    slider->move(300, 100);
    button->move(10, 325);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setRange(1, 99);



    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(LCDAD()));
    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(LC(int)));
    connect(button, SIGNAL(clicked()), this, SLOT(SHOW()));

}
    void Widget::LCDAD() {
        int random_value = rand() % 100;
        list->addItem(QString::number(random_value));
        //delete list->takeItem(list->row(item));

            }

    void Widget::LC(int i) {

       lcd->display(i);
            }


    void Widget::SHOW() {
        //QString text = ui->label->toPlainText();

        this->label;
        QString list;
        label->setText(list);
            }



Widget::~Widget()
{
    delete ui;
}
