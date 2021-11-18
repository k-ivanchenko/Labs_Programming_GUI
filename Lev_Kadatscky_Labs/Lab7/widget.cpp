#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500, 500);
    lcd1 = new QLCDNumber(this);
    lcd2 = new QLCDNumber(this);
    lbl1 = new QLabel("Hello!", this);
    lcd1 -> move(100, 150);
    lcd2 -> move(350, 150);
    lbl1 -> move(250, 250);
    setMouseTracking(true);
    int label_x = lbl1 -> x();
    int label_y =lbl1 -> y();
    lcd1 -> display(label_x);
    lcd2 -> display(label_y);
}

void Widget :: mouseMoveEvent(QMouseEvent *e){
    int label_x = lbl1 -> x();
    int label_y =lbl1 -> y();
    //lcd1 -> display(label_x);
    //lcd2 -> display(label_y);
    int lcd1_x = lcd1 -> x();
    int lcd1_y = lcd1 -> y();
    int lcd1_w = lcd1 -> width();
    int lcd1_h = lcd1 -> height();
    int lcd2_x = lcd2 -> x();
    int lcd2_y = lcd2 -> y();
    int lcd2_w = lcd2 -> width();
    int lcd2_h =lcd2 -> height();
    int lbl_w = lbl1 -> width();
    int lbl_h = lbl1 -> height();
    bool buttonPress = e -> buttons()&Qt::LeftButton;
    QRect lcd1_pos(lcd1_x,lcd1_y,lcd1_w,lcd1_h);
    QRect lcd2_pos(lcd2_x, lcd2_y, lcd2_w, lcd2_h);
    QRect lbl_pos(label_x, label_y, lbl_w, lbl_h);
    int pos_x = e -> x();
    int pos_y = e -> y();
    QPoint p(pos_x, pos_y);
    if(buttonPress && lcd1_pos.contains(p))
    {
        int new_x = lcd1_x - 20;
        int new_y = lcd1_y - 10;
        lcd1 -> move(new_x,new_y);
    }
    if(buttonPress && lcd2_pos.contains(p))
    {
        int new_x = lcd2_x - 20;
        int new_y = lcd2_y - 10;
        lcd2 -> move(new_x,new_y);
    }
    if(buttonPress && lbl_pos.contains(p))
    {
        int new_x = label_x - 20;
        int new_y = label_y - 10;
        lbl1 -> move(new_x,new_y);
        lcd1 -> display(new_x);
        lcd2 -> display(new_y);
    }
}

Widget::~Widget()
{
}

