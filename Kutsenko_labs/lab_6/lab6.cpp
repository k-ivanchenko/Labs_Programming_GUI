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

    spb_xWin->setRange(0,100000000);
    spb_yWin->setRange(0,100000000);
    spb_wWin->setRange(0,100000000);
    spb_hWin->setRange(0,100000000);
    spb_xMouse->setRange(0,100000000);
    spb_yMouse->setRange(0,100000000);
    spb_xMouWin->setRange(0,100000000);
    spb_yMouWin->setRange(0,100000000);

    spb_xWin->setReadOnly(true);
    spb_yWin->setReadOnly(true);
    spb_wWin->setReadOnly(true);
    spb_hWin->setReadOnly(true);
    spb_xMouse->setReadOnly(true);
    spb_yMouse->setReadOnly(true);
    spb_xMouWin->setReadOnly(true);
    spb_yMouWin->setReadOnly(true);

}

void lab6::moveEvent(QMoveEvent *e){
    spb_xWin->setValue(e->pos().x());
    spb_yWin->setValue(e->pos().y());
}

void lab6::resizeEvent(QResizeEvent *e){
    spb_wWin->setValue(e->size().width());
    spb_hWin->setValue(e->size().height());

}

void lab6::mousePressEvent(QMouseEvent *e){
    spb_xMouWin->setValue(e->position().x());
    spb_yMouWin->setValue(e->position().y());
    spb_xMouse->setValue(e->globalPosition().x());
    spb_yMouse->setValue(e->globalPosition().y());
    if(Qt::LeftButton&e->button()){
        countMouseL++;
    }
    if(Qt::RightButton&e->button()){
        countMouseR++;
    }
    lcd_left->display(countMouseL);
    lcd_right->display(countMouseR);
}


void lab6::keyPressEvent(QKeyEvent *e){
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

