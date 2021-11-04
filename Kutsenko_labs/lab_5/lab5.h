#ifndef LAB5_H
#define LAB5_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QComboBox>
#include <QListWidget>
#include <QSlider>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidgetItem>

class lab5 : public QMainWindow
{
    Q_OBJECT
public:
    QLCDNumber *lcd1, *lcd2;
    QComboBox *cmx;
    QListWidget *lst;
    QSlider *slr1, *slr2;
    QLineEdit *lne1, *lne2;
    QPushButton *btn1, *btn2;

public slots:
    void oneLcd(int val);
    void twoLcd(int val);
    void addLst();
    void addCmx();
    void delLst();
    void delCmx();

public:
    lab5(QWidget *parent = nullptr);
    ~lab5();
};
#endif // LAB5_H
