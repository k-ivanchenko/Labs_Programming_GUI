#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QString>
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLineEdit *LineEdit1;
    QSpinBox *spin1;
    QSpinBox *spin2;
    QIntValidator *validator;

public slots:
    void setMax(int i);
    void setTitle(const QString &text);
    void setSpinValue(const QString &text);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
