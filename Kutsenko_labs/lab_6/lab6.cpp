#include "lab6.h"

lab6::lab6(QWidget *parent)
    : QMainWindow(parent)
{

    spb_xWin = new QSpinBox(this);
    spb_yWin = new QSpinBox(this);
    spb_wWin = new QSpinBox(this);
    spb_hWin = new QSpinBox(this);
    spb_xMouse = new QSpinBox(this);
    spb_yMouse = new QSpinBox(this);
    spb_xMouWin = new QSpinBox(this);
    spb_yMouWin = new QSpinBox(this);
    lcd_left = new QLCDNumber(this);
    lcd_right = new QLCDNumber(this);
    countMouseL=0;
    countMouseR=0;

    setMouseTracking(true);

    spb_xWin->move(0,0);
    spb_yWin->move(0,30);
    spb_wWin->move(0,60);
    spb_hWin->move(0,90);
    spb_xMouse->move(0,120);
    spb_yMouse->move(0,150);
    spb_xMouWin->move(0,180);
    spb_yMouWin->move(0,210);
    lcd_left->move(100,0);
    lcd_right->move(100,30);

    spb_xWin->setValue(3);

}

void lab6::locationWin(QMoveEvent *e){
    spb_xWin->setValue(e->pos().x());
    spb_yWin->setValue(e->pos().y());
}

void lab6::sizeWin(QResizeEvent *e){
    spb_wWin->setValue(e->size().width());
    spb_hWin->setValue(e->size().height());

}

void lab6::locationMou(QMouseEvent *e){
    spb_xMouWin->setValue(e->position().x());
    spb_yMouWin->setValue(e->position().y());
    spb_xMouse->setValue(e->globalPosition().x());
    spb_yMouse->setValue(e->globalPosition().y());
}

void lab6::pressMou(QMouseEvent *e){
    if(Qt::LeftButton&e->button()){
        countMouseL++;
    }
    if(Qt::RightButton&e->button()){
        countMouseR++;
    }
    lcd_left->display(countMouseL);
    lcd_right->display(countMouseR);
}

void lab6::pressKey(QKeyEvent *e){
    if(Qt::Key_L==e->key()){
        countMouseL=0;
        lcd_left->display(countMouseL);
    }
    if(Qt::Key_R==e->key()){
        countMouseR=0;
        lcd_right->display(countMouseR);
    }
}
lab6::~lab6()
{
}

