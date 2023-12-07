/********************************************************************************
** Form generated from reading UI file 'startpressed.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPRESSED_H
#define UI_STARTPRESSED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_startPressed
{
public:
    QLabel *startMessage;
    QPushButton *button;

    void setupUi(QDialog *startPressed)
    {
        if (startPressed->objectName().isEmpty())
            startPressed->setObjectName("startPressed");
        startPressed->resize(400, 163);
        startMessage = new QLabel(startPressed);
        startMessage->setObjectName("startMessage");
        startMessage->setGeometry(QRect(70, 40, 301, 20));
        button = new QPushButton(startPressed);
        button->setObjectName("button");
        button->setGeometry(QRect(160, 120, 80, 24));

        retranslateUi(startPressed);

        QMetaObject::connectSlotsByName(startPressed);
    } // setupUi

    void retranslateUi(QDialog *startPressed)
    {
        startPressed->setWindowTitle(QCoreApplication::translate("startPressed", "Dialog", nullptr));
        startMessage->setText(QCoreApplication::translate("startPressed", "Start has been pressed. The game will then begin!", nullptr));
        button->setText(QCoreApplication::translate("startPressed", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startPressed: public Ui_startPressed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPRESSED_H
