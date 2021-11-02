#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel *lbl_xWindow;
    QLabel *lbl_yWindow;

    QLabel *lbl_width;
    QLabel *lbl_height;

    QLabel *lbl_xMouseWidget;
    QLabel *lbl_yMouseWidget;

    QLabel *lbl_xMouseWindow;
    QLabel *lbl_yMouseWindow;

    QLCDNumber *lcd_LeftClick;
    QLCDNumber *lcd_RightClick;

    QBoxLayout *layout;

    int countL, countR;

protected:
    void resizeEvent(QResizeEvent *e);
    void moveEvent(QMoveEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // WIDGET_H
