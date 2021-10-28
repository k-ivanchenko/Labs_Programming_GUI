#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QSpinBox>
#include <QLabel>
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QLineEdit *line;
    QSpinBox *spin1;
    QSpinBox *spin2;
    QLabel *labe1;
    QLabel *labe2;
    QLabel *labe3;
    QIntValidator *val;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void setTitle(const QString &t);
    void Top(int a);
    void el();
};
#endif // MAINWINDOW_H
