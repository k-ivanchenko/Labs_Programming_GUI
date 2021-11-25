#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
       lcd = new QLCDNumber(7, this);
       list = new QListWidget(this);
       sld = new QSlider(Qt::Horizontal, this);
       lbl = new QLabel("Надпись",this);
       lbl->resize(lbl->size ());
       btn = new QPushButton("Нажмите кнопку", this);
       QString str1=("");
       list->move(10, 90);
       lbl->move(10, 60);
       lcd->move(10, 30);
       sld->move(10, 300);
       sld->setRange(0, 99);
       btn->move(10, 350);
       sld->setTickPosition(QSlider::TicksBothSides);
       connect(sld, SIGNAL(valueChanged(int)), this, SLOT(ADDLIST(int)));
       connect(sld, SIGNAL(valueChanged(int)), this, SLOT(DISPLAY(int)));
       connect(btn, SIGNAL(clicked()), this, SLOT(LIST()));
   }
       void Widget::ADDLIST(int b)
      {
       list->clear();
       for(i=0;i<b;i++)
      {
       k = rand() % 100;
       list->addItem(QString::number(k));
      }
     };



       void Widget::DISPLAY(int i)
       {
         lcd->display(i);
       }
       void Widget::LIST()
      {
          if(i == 0)
          {
              lbl->setText("Двигайте слайдер");
              setWindowTitle("Двигайте слайдер");
          }
          for(i=0; i < list->count();i++)
          {

                str = list->item(i)->text();
                lbl->setText(str);
                setWindowTitle(str);
           }
   };



Widget::~Widget()
{
}

