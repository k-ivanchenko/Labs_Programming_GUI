#include "mywidget.h"

myWidget::myWidget(QWidget *parent): QMainWindow(parent)
{

    sb1 = new QSpinBox(this);
    sb1->setMaximum(500);
    sb1->move(10,100);
    sb1->setFocusPolicy(Qt::ClickFocus);

    sb2 = new QSpinBox(this);
    sb2->move(10,200);
    sb2->setMaximum(500);
     sb2->setFocusPolicy(Qt::ClickFocus);

    sb3 = new QSpinBox(this);
    sb3->move(150,100);
    sb3->setMaximum(1000);
    sb3->setFocusPolicy(Qt::ClickFocus);


    sb4 = new QSpinBox(this);
    sb4->move(150,200);
    sb4->setMaximum(1000);
    sb4->setFocusPolicy(Qt::ClickFocus);

    sb5 = new QSpinBox(this);
    sb5->move(300,100);
    sb5->setMaximum(1000);
    sb5->setFocusPolicy(Qt::ClickFocus);

    sb6 = new QSpinBox(this);
    sb6->move(300,200);
    sb6->setMaximum(1000);
    sb6->setFocusPolicy(Qt::ClickFocus);

    sb7 = new QSpinBox(this);
    sb7->move(500,100);
    sb7->setMaximum(1500);
    sb7->setFocusPolicy(Qt::ClickFocus);


    sb8 = new QSpinBox(this);
    sb8->move(500,200);
    sb8->setMaximum(1500);
    sb8->setFocusPolicy(Qt::ClickFocus);

    num1 = new QLCDNumber(this);
    num1->move(100 ,300);
    num2 = new QLCDNumber(this);
    num2->move(400 ,300);
    resize(700,500);

}
void myWidget::moveEvent(QMoveEvent *e){
    QPoint pos = e->pos();
    int x = pos.x();
    sb1->setValue(x);
    int y = pos.y();
    sb2->setValue(y);
}
void myWidget ::resizeEvent(QResizeEvent *e){
    QSize size= e->size();
    int h =size.height();
    sb3->setValue(h);
    int w =size.width();
    sb4->setValue(w);
}

void myWidget::mouseMoveEvent(QMouseEvent *e){
    QPoint pos = e->pos();

    int x1 = pos.x();
    sb5->setValue(x1);
    int y1 = pos.y();
    sb6->setValue(y1);

    int x2 = e->globalX();
    sb7->setValue(x2);
    int y2 = e->globalY();
    sb8->setValue(y2);
}

void myWidget::mousePressEvent(QMouseEvent *e){
       if(Qt::LeftButton&e->button()){
           n++;
           num1->display(n);
       }else if(Qt::RightButton&e->button()){
           k++;
           num2->display(k);
       }
}
void myWidget::keyPressEvent(QKeyEvent *e){
    if(Qt::Key_R==e->key()){
        n=0;
         num1->display(n);
    }else if("1"==e->text()){
        k=0;
        num2->display(k);
    }

}

void myWidget::mouseReleaseEvent(QMouseEvent *event){

}
myWidget::~myWidget()
{
}

