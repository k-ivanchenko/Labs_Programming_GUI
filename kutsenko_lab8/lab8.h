#ifndef LAB8_H
#define LAB8_H

#include <QMainWindow>
#include <QSpinBox>
#include <QTimer>
#include <QRect>
#include <QPainter>
#include <QPolygon>
#include <QPoint>
#include <QBrush>
#include <QPen>
#include <QPaintEvent>

class lab8 : public QMainWindow
{
    Q_OBJECT
public:
    QSpinBox *spb;
    QTimer *timer;
    QPainter *painter;

    int counter, x, y;

public slots:
    void settimer(int c);
    void moveIt();
    void paintEvent(QPaintEvent *e);

public:
    lab8(QWidget *parent = nullptr);
    ~lab8();
};
#endif // LAB8_H
