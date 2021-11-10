#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QString>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QValidator>
#include <QIntValidator>

class MyValidator:public QValidator
{
public:
    MyValidator (QObject *parent=0):QValidator (parent) {}
    State validate (QString &str, int &pos) const
    {
        pos=str.length();
        unsigned int x = str.toInt()%2;
        if (str.toInt() < 0 && x == 0)
            return Invalid;
        else return Acceptable;
    }
};


class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLineEdit * edit;
    QSpinBox * spin;
    QLabel * lbl1;
    QLabel * lbl2;
    MyValidator * mvr;
    QIntValidator * ivr;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void spinChange(int i);
    void textChange(QString str);
};
#endif // MAINWINDOW_H
