#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QLabel>
#include <QMouseEvent>
#include <QBoxLayout>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QKeyEvent>
#include <QSize>
#include <QString>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
    QLCDNumber *lcd3;
    QLCDNumber *lcd4;
    QLCDNumber *lcd5;
    QLCDNumber *lcd6;
    QLCDNumber *lcd7;
    QLCDNumber *lcd8;
    QLabel *lbl1;
    QLabel *lbl2;
    QBoxLayout *layout;
    int a;
    int b;
    int c;
protected:
    void moveEvent(QMoveEvent *t);
    void resizeEvent(QResizeEvent *t);
    void mouseMoveEvent(QMouseEvent *t);
    void mousePressEvent(QMouseEvent *t);
    void keyPressEvent(QKeyEvent *t);
};
#endif // WIDGET_H
