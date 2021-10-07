#ifndef WIDGET_H
#define WIDGET_H
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QWidget>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT
private:
    QPushButton *btn;
    QLabel *lbl;
    QCheckBox *chbx;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void change()
    {
        lbl->setText("cmo ebanoe");
    }
};
#endif // WIDGET_H
