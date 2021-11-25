#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QMainWindow(parent)
{
    num1 = new QLCDNumber(this);
    num1->move(50,50);

    num2 = new QLCDNumber(this);
    num2->move(50,250);

    lbl = new QLabel("hello",this);
    lbl->move(250,50);
    int lblX = lbl->x();
    int lblY = lbl->y();

    num1->display(lblX);
    num2->display(lblY);
    resize(400,400);
}

void MyWidget::mouseMoveEvent(QMouseEvent *e){
     bool leftBtn = e->buttons()&Qt::LeftButton;
     QPoint posCurs = e->pos();
     int cursX = posCurs.x();
     int cursY = posCurs.y();

     QPoint posLbl = lbl->pos();
     int lblX = posLbl.x();
     int lblY = posLbl.y();

     QPoint posNum1 = num1->pos();
     int num1X = posNum1.x();
     int num1Y = posNum1.y();

     QPoint posNum2 = num2->pos();
     int num2X = posNum2.x();
     int num2Y = posNum2.y();

     QSize lblSize = lbl->size();
     int lblW = lblSize.width();
     int lblH = lblSize.height();

     QSize num1Size = lbl->size();
     int num1W = num1Size.width();
     int num1H = num1Size.height();

     QSize num2Size = lbl->size();
     int num2W = num2Size.width();
     int num2H = num2Size.height();



     if(leftBtn && (cursX<=lblX+lblW+20 && cursX >=lblX-20 ) && (cursY<=lblY+lblH+20 && cursY >=lblY-20) ){
         num1->display(lblX);
         num2->display(lblY);
         lbl->move(cursX,cursY) ;
    }else if(leftBtn && (cursX<=num1X+num1W+20 && cursX >=num1X-20 ) && (cursY<=num1Y+num1H+20 && cursY >=num1Y-20) ){

         num1->move(cursX,cursY) ;
    }else if(leftBtn && (cursX<=num2X+num2W+20 && cursX >=num2X-120 ) && (cursY<=num2Y+num2H+20 && cursY >=num2Y-20) ){

         num2->move(cursX,cursY) ;
      }



}
MyWidget::~MyWidget()
{
}

