#ifndef LAB6_H
#define LAB6_H

#include <QMainWindow>
#include <QSpinBox>
#include <QLCDNumber>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPoint>
#include <QSize>

class lab6 : public QMainWindow
{
    Q_OBJECT

public:
    QSpinBox *spb_xWin, *spb_yWin;
    QSpinBox *spb_wWin, *spb_hWin;
    QSpinBox *spb_xMouse, *spb_yMouse;
    QSpinBox *spb_xMouWin, *spb_yMouWin;

    QLCDNumber *lcd_left, *lcd_right;

    int countMouseL, countMouseR;

    void moveEvent(QMoveEvent *e);
    void resizeEvent(QResizeEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);

public:
    lab6(QWidget *parent = nullptr);
    ~lab6();
};
#endif // LAB6_H
