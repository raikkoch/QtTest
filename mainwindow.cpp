#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dateneingabe.h"
#include "ui_dateneingabe.h"
#include <QMainWindow>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     Dateneingabe datenin;
     datenin.exec();

}

void MainWindow::on_pushButton_3_clicked()
{
    this ->close();
}
