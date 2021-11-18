#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPoint>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QKeyEvent>

class Widget : public QWidget
{
    Q_OBJECT
public:
        int r;
        int l;
        QGridLayout * grid;
        QLineEdit * edit1;
        QLineEdit * edit2;
        QLineEdit * edit3;
        QLineEdit * edit4;
        QLineEdit * edit5;
        QLineEdit * edit6;
        QLineEdit * edit7;
        QLineEdit * edit8;
        QLabel * lbl1;
        QLabel * lbl2;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void moveEvent(QMoveEvent *e);
    void resizeEvent(QResizeEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent (QMouseEvent *e);
    void keyPressEvent (QKeyEvent *e);
};
#endif // WIDGET_H
