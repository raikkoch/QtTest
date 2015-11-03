#include "dateneingabe.h"
#include "ui_dateneingabe.h"

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
