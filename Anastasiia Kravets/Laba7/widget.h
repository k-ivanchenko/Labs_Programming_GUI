#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QLineEdit *line;
    QLineEdit *line2;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:

    //void first();
    //void second();

protected:
void keyPressEvent(QKeyEvent *e);



private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
