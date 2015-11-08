#include "dateneingabe.h"
#include "ui_dateneingabe.h"
#include <QMainWindow>
#include <QtGui>
#include "mainwindow.h"
#include "person.h"
#include "QString"

Dateneingabe::Dateneingabe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dateneingabe)
{
    ui->setupUi(this);
}

Dateneingabe::~Dateneingabe()
{
    delete ui;
}

void Dateneingabe::on_buttonAbbrechen_clicked()
{
    this ->close();
}


void Dateneingabe::on_buttonSpeichern_clicked()
{
    Person pers1;
    pers1.setName(ui->lineEditName->text());
    ui->labelName->setText(pers1.getName());
    pers1.setVorname(ui->lineEditVorname->text());
    ui->labelVorname->setText(pers1.getVorname());
    pers1.setEmail(ui->lineEdit->text());
    ui->labelEmail->setText(pers1.getEmail());
    pers1.setAlter(ui->lineEditAlter->text().toInt());
    ui->labelAlter->setText(QString::number(pers1.getAlter()));

}
