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

    QSpinBox *counter;
    QTimer *timer;
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
private slots:
    void slotCounter(int);
    void moveSquare();
protected:
    void paintEvent(QPaintEvent* e);
};
#endif // WIDGET_H
