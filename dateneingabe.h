#ifndef DATENEINGABE_H
#define DATENEINGABE_H

#include <QDialog>

namespace Ui {
class Dateneingabe;
}

class Dateneingabe : public QDialog
{
    Q_OBJECT

public:
    explicit Dateneingabe(QWidget *parent = 0);
    ~Dateneingabe();

private slots:
    void on_buttonAbbrechen_clicked();

    void on_buttonSpeichern_clicked();

private:
    Ui::Dateneingabe *ui;
};

#endif // DATENEINGABE_H
