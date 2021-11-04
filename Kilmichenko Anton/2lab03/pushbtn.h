#ifndef PUSHBTN_H
#define PUSHBTN_H

#include <QtWidgets>
#include <QWidget>
#include <QLabel>
#include <QAbstractButton>
#include <QString>

class pushbtn : public QWidget
{
    Q_OBJECT
private:
    QString * str;
    QString * str1;
    QString * str2;
    QString * str3;
    QString * str4;
    QString * str5;
    QLabel * lbl;
    QCheckBox * box;
    QCheckBox * box1;
    QCheckBox * box2;
    QRadioButton * rbtn;
    QRadioButton * rbtn1;
    QRadioButton * rbtn2;
    QPushButton * btn1;
    QPushButton * btn2;
public:
    pushbtn(QWidget *parent = nullptr);
        ~pushbtn();

public slots:
    void click1();
    void click2();

    void ReadState(bool state);
    void ReadState1(bool state);
    void ReadState2(bool state);

    void ReadTristate(int state);
    void ReadTristate1(int state);
    void ReadTristate2(int state);

    void RButtonState(bool state);
    void RButtonState1(bool state);
    void RButtonState2(bool state);
};

#endif // PUSHBTN_H
