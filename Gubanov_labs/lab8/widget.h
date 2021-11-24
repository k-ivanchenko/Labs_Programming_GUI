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

    QSlider *slider;
    QTimer *timer;
    int x=0,y=0,tm,j=1;
private slots:
    void slotSlider(int);
    void moveTriangle();
protected:
    void paintEvent(QPaintEvent* e);

};
#endif // WIDGET_H
