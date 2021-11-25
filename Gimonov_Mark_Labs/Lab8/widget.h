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
    QPainter painter;
    QPen pen;
    int x, y;
private slots:
    void slotCounter(int);
    void moveSquare();
protected:
    void paintEvent(QPaintEvent* e);
};
#endif // WIDGET_H
