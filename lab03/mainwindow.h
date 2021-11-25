#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QRadioButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QPushButton * btn1;
    QPushButton * btn2;

    QLabel * lbl;

    QCheckBox * chbox1;
    QCheckBox * chbox2;
    QCheckBox * chbox3;

    QRadioButton * rbtn1;
    QRadioButton * rbtn2;
    QRadioButton * rbtn3;

public slots:
    void RButtonDo1(bool state);
    void RButtonDo2(bool state);
    void RButtonDo3(bool state);
    void CHBoxDo1(bool state);
    void CHBoxDo2(bool state);
    void CHBoxDo3(bool state);
    void ButtonDo1();
    void ButtonDo2();



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
