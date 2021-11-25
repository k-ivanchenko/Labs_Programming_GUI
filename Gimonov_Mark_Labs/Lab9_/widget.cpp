#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    text1 = new QLineEdit(this);
    text2 = new QLineEdit(this);

    counter = new QSpinBox(this);

    btnOpen = new QPushButton("Открыть", this);
    btnSave = new QPushButton("Сохранить", this);
    btnHorizontal = new QPushButton("Горизонтальное отражение", this);
    btnVertical = new QPushButton("Вертикальное отражение", this);

    layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    layout->setAlignment(Qt::AlignCenter);

    layout->addWidget(text1);
    layout->addWidget(text2);
    layout->addWidget(counter);
    layout->addWidget(btnOpen);
    layout->addWidget(btnSave);
    layout->addWidget(btnHorizontal);
    layout->addWidget(btnVertical);

    connect(btnOpen, SIGNAL(clicked()), this, SLOT(slotBtnOpen()));
    connect(btnSave, SIGNAL(clicked()), this, SLOT(slotBtnSave()));
    connect(btnHorizontal, SIGNAL(clicked()), this, SLOT(slotBtnHorizontal()));
    connect(btnVertical, SIGNAL(clicked()), this, SLOT(slotBtnVertical()));
    connect(counter, SIGNAL(valueChanged(int)), this, SLOT(slotCounter(int)));
}

Widget::~Widget()
{
}

void Widget::slotBtnOpen(){
    img.load(text1->text());
    form.show();

}

void Widget::slotBtnSave(){

}

void Widget::slotBtnHorizontal(){

}

void Widget::slotBtnVertical(){

}

void Widget::slotCounter(int val){

}

void Widget::paintEvent(QPaintEvent *e){
    QPainter painter;
    painter.begin(&form);
    painter.drawPixmap(QPoint(0, 0), img);
    painter.end();

}

