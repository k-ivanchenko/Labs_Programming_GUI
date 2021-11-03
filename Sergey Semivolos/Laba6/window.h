#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QSpinBox>
#include <QLCDNumber>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QKeyEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT
    QSpinBox *spin1;
    QSpinBox *spin2;
    QSpinBox *spin3;
    QSpinBox *spin4;
    QSpinBox *spin5;
    QSpinBox *spin6;
    QSpinBox *spin7;
    QSpinBox *spin8;
    QLCDNumber *num1;
    QLCDNumber *num2;
public:
    Window(QWidget *parent = nullptr);
    ~Window();
protected:
    void resizeEvent(QResizeEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void moveEvent(QMoveEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
    //void keyReleaseEvent(QKeyEvent *e);
};
#endif // WINDOW_H
