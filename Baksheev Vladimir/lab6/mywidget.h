#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QWidget>
#include <QLCDNumber>
#include <QSpinBox>
#include <QPoint>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QKeyEvent>
class myWidget : public QMainWindow
{
    Q_OBJECT
private:
    QSpinBox *sb1;
    QSpinBox *sb2;
    QSpinBox *sb3;
    QSpinBox *sb4;
    QSpinBox *sb5;
    QSpinBox *sb6;
    QSpinBox *sb7;
    QSpinBox *sb8;
    QLCDNumber *num1;
    QLCDNumber *num2;
    int n=0;
    int k=0;

public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

protected:
    void resizeEvent(QResizeEvent * e);
    void moveEvent(QMoveEvent * e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // MYWIDGET_H
