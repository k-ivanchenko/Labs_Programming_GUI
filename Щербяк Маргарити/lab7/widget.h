#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLineEdit>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLineEdit*edit1;
    QLineEdit*edit2;
    protected:
    void moveEvent(QMoveEvent*e);
    void mouseMoveEvent(QMouseEvent *e);

};
#endif // WIDGET_H
