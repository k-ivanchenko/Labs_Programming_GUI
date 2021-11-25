#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QString>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QApplication>
#include <QMouseEvent>
#include <Qt>

class MainWidget : public QMainWindow
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

protected:
    bool eventFilter(QObject *obj, QEvent *e);
    void timerEvent(QTimerEvent *e);

private:
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit4;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit6;
    QLineEdit *lineEdit7;
    QLineEdit *lineEdit8;

    QLabel *label1;
    QLabel *label2;

    int timer;
};
#endif // MAINWIDGET_H
