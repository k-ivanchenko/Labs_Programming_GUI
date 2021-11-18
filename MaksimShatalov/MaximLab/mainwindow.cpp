#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lbl->setText("Edit");
    ui->lbl->setBuddy(ui->lineEdit);

    ui->lbl2->setText("Spin");
    ui->lbl2->setBuddy(ui->spinBox);
    h = h % 2 != 0;
    ui->lineEdit->setValidator(new QIntValidator(0, h));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_textChanged(const QString &arg1)
{
    value = ui->lineEdit->text();
    value.remove(0, value.length() - ui->spinBox->value());
    this->setWindowTitle(value.length() == 0 ? "0" : ui->lineEdit->text());
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    value = ui->lineEdit->text();
    value.remove(0, value.length() - ui->spinBox->value());
    ui->lineEdit->setText(value);
    this->setWindowTitle(value.length() == 0 ? "0" : ui->lineEdit->text());
}

