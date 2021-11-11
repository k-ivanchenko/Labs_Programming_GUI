#ifndef LAB7_H
#define LAB7_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QLabel>
#include <QMouseEvent>

class lab7 : public QMainWindow
{
    Q_OBJECT
public:
    QLCDNumber *lcd1, *lcd2;
    QLabel *lbl1;

    void mouseMoveEvent(QMouseEvent *e);

public:
    lab7(QWidget *parent = nullptr);
    ~lab7();
};
#endif // LAB7_H
