#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QRadioButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();
private:
    QPushButton *btn;
    QPushButton *btm;
    QCheckBox *ein;
    QCheckBox *zwei;
    QCheckBox *drei;
    QRadioButton *a;
    QRadioButton *b;
    QRadioButton *c;
    QLabel *lbl;
public slots:
    void setbtn();
    void setbtm();
    void setein();
    void setzwei();
    void setdrei();
    void seta();
    void setb();
    void setc();


};
#endif
