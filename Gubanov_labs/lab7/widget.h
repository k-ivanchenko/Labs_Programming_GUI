#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QKeyEvent>
#include <QEvent>
#include <QKeyEvent>


class Widget : public QWidget
{
    Q_OBJECT
    QSpinBox *sbox1;
    QSpinBox *sbox2;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void Sbox1(QString);
    void Sbox2(QString);
protected:
void keyPressEvent(QKeyEvent *e);

};
#endif // WIDGET_H
