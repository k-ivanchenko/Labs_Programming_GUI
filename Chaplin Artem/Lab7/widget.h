#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLCDNumber>
#include <QHBoxLayout>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QHBoxLayout *layout;
    QLabel *label1;
    QLCDNumber *indicator1;
    QLCDNumber *indicator2;
protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
