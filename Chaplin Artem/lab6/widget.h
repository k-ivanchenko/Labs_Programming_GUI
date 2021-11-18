#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include <QSpinBox>
#include <QLCDNumber>
#include <QBoxLayout>
#include <QResizeEvent>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    int lclick;
    int rclick;
    QBoxLayout *layout1;
    QWidget *widget1;
    QWidget *widget2;
    QSpinBox *spin1;
    QSpinBox *spin2;
    QSpinBox *spin3;
    QSpinBox *spin4;
    QSpinBox *spin5;
    QSpinBox *spin6;
    QSpinBox *spin7;
    QSpinBox *spin8;
    QLCDNumber *indicator1;
    QLCDNumber *indicator2;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

protected:
    void resizeEvent(QResizeEvent *e);
    void moveEvent(QMoveEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
};
#endif // WIDGET_H
