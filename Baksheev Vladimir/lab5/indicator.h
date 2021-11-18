#ifndef INDICATOR_H
#define INDICATOR_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QListWidget>
#include <QComboBox>
#include <QSlider>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
class indicator : public QMainWindow
{
    Q_OBJECT
private:
    QLCDNumber *num1;
    QLCDNumber *num2;
    QListWidget *list;
    QComboBox *combo;
    QSlider *slider1;
    QSlider *slider2;
    QLineEdit *linE1;
    QLineEdit *linE2;
    QPushButton *btn1;
    QPushButton *btn2;
    QGroupBox *box1;
    QGroupBox *box2;
    int val1=0;
    int val2=0;
public:
    indicator(QWidget *parent = nullptr);
    ~indicator();
public slots:
    void addItemL();
    void addItemC();
    void displyNum1(int a);
    void displyNum2(int a);
    void removeItem1();
    void removeItem2();
};
#endif // INDICATOR_H
