#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QLabel>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT
    QLCDNumber *num1;
    QLCDNumber *num2;
    QLabel *txt;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
protected:
    void mouseMoveEvent(QMouseEvent *e);
};
#endif // WINDOW_H
