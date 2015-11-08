/********************************************************************************
** Form generated from reading UI file 'dateneingabe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATENEINGABE_H
#define UI_DATENEINGABE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dateneingabe
{
public:
    QLineEdit *lineEditName;
    QLabel *labelName;
    QLabel *labelVorname;
    QLabel *labelEmail;
    QLabel *labelAlter;
    QLineEdit *lineEditVorname;
    QLineEdit *lineEdit;
    QLineEdit *lineEditAlter;
    QPushButton *buttonSpeichern;
    QPushButton *buttonAbbrechen;

    void setupUi(QDialog *Dateneingabe)
    {
        if (Dateneingabe->objectName().isEmpty())
            Dateneingabe->setObjectName(QStringLiteral("Dateneingabe"));
        Dateneingabe->resize(400, 300);
        Dateneingabe->setToolTipDuration(9);
        lineEditName = new QLineEdit(Dateneingabe);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(190, 40, 171, 21));
        labelName = new QLabel(Dateneingabe);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(60, 40, 59, 16));
        labelVorname = new QLabel(Dateneingabe);
        labelVorname->setObjectName(QStringLiteral("labelVorname"));
        labelVorname->setGeometry(QRect(60, 70, 59, 16));
        labelEmail = new QLabel(Dateneingabe);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setGeometry(QRect(60, 100, 121, 16));
        labelAlter = new QLabel(Dateneingabe);
        labelAlter->setObjectName(QStringLiteral("labelAlter"));
        labelAlter->setGeometry(QRect(60, 130, 59, 16));
        lineEditVorname = new QLineEdit(Dateneingabe);
        lineEditVorname->setObjectName(QStringLiteral("lineEditVorname"));
        lineEditVorname->setGeometry(QRect(190, 70, 171, 21));
        lineEdit = new QLineEdit(Dateneingabe);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 100, 171, 21));
        lineEditAlter = new QLineEdit(Dateneingabe);
        lineEditAlter->setObjectName(QStringLiteral("lineEditAlter"));
        lineEditAlter->setGeometry(QRect(190, 130, 171, 21));
        buttonSpeichern = new QPushButton(Dateneingabe);
        buttonSpeichern->setObjectName(QStringLiteral("buttonSpeichern"));
        buttonSpeichern->setGeometry(QRect(40, 220, 113, 32));
        buttonAbbrechen = new QPushButton(Dateneingabe);
        buttonAbbrechen->setObjectName(QStringLiteral("buttonAbbrechen"));
        buttonAbbrechen->setGeometry(QRect(230, 220, 113, 32));

        retranslateUi(Dateneingabe);

        QMetaObject::connectSlotsByName(Dateneingabe);
    } // setupUi

    void retranslateUi(QDialog *Dateneingabe)
    {
        Dateneingabe->setWindowTitle(QApplication::translate("Dateneingabe", "Dialog", 0));
        labelName->setText(QApplication::translate("Dateneingabe", "Name", 0));
        labelVorname->setText(QApplication::translate("Dateneingabe", "Vorname", 0));
        labelEmail->setText(QApplication::translate("Dateneingabe", "Email", 0));
        labelAlter->setText(QApplication::translate("Dateneingabe", "Alter", 0));
        buttonSpeichern->setText(QApplication::translate("Dateneingabe", "Speichern", 0));
        buttonAbbrechen->setText(QApplication::translate("Dateneingabe", "Abbrechen", 0));
    } // retranslateUi

};

namespace Ui {
    class Dateneingabe: public Ui_Dateneingabe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATENEINGABE_H
