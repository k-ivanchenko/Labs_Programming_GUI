#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLCDNumber>
#include <QRect>
#include <QMouseEvent>
#include <QPoint>


class Widget : public QWidget
{
    Q_OBJECT
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QLabel *lbl1;


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void mouseMoveEvent(QMouseEvent *e);
};
#endif // WIDGET_H
