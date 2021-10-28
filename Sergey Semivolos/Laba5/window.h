#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QListWidget>
#include <QLineEdit>
#include <QSlider>
#include <QPushButton>
#include <QLCDNumber>


QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT
    QComboBox *combo;
    QListWidget *list;
    QLineEdit *text1;
    QLineEdit *text2;
    QSlider *slide1;
    QSlider *slide2;
    QPushButton *butt1;
    QPushButton *butt2;
    QLCDNumber *lcd1;
    QLCDNumber *lcd2;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
public slots:
    void Add1();
    void Add2();
    void del1();
    void chg1(int);
    void del2();
    void chg2(int);
    void SetTitle(const QString &t);


};
#endif // WINDOW_H
