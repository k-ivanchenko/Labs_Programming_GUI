#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QComboBox>
#include <QListWidget>
#include <QSlider>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QLCDNumber * lcd;
    QComboBox * cbox;
    QListWidget * lw;
    QSlider * sld;
    QPushButton * btn;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void CboxChange();
    void LWChange();
    void SLDChange(int i);
};
#endif // MAINWINDOW_H
