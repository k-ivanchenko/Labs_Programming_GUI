#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QComboBox>
#include <QListWidget>
#include <QSlider>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QLCDNumber *indicator1;
    QLCDNumber *indicator2;
    QComboBox *comboBox;
    QListWidget *list;
    QSlider *slider1;
    QSlider *slider2;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QPushButton *button1;
    QPushButton *button2;

public slots:
    void FirstIndicator(int i);
    void SecondIndicator(int i);
    void NewListElement();
    void NewComboElement();
    void DeleteListElement();
    void DeleteComboElement();

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
