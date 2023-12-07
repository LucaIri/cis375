/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *title;
    QLabel *p1label;
    QLabel *p2label;
    QLineEdit *p1input;
    QLineEdit *p2input;
    QPushButton *startButt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(713, 321);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(440, 120, 211, 20));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(440, 190, 211, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(500, 60, 20, 211));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::VLine);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(570, 60, 20, 211));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(440, 260, 211, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(5);
        line_5->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(440, 50, 211, 20));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(5);
        line_6->setFrameShape(QFrame::HLine);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(430, 60, 20, 211));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setLineWidth(5);
        line_7->setFrameShape(QFrame::VLine);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(640, 60, 20, 211));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setLineWidth(5);
        line_8->setFrameShape(QFrame::VLine);
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(58, 59, 191, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Playbill")});
        font1.setPointSize(26);
        title->setFont(font1);
        title->setStyleSheet(QString::fromUtf8("QLabel {color: black; border: 2px solid black}"));
        title->setAlignment(Qt::AlignCenter);
        p1label = new QLabel(centralwidget);
        p1label->setObjectName("p1label");
        p1label->setGeometry(QRect(60, 130, 49, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Playbill")});
        font2.setPointSize(16);
        p1label->setFont(font2);
        p2label = new QLabel(centralwidget);
        p2label->setObjectName("p2label");
        p2label->setGeometry(QRect(60, 170, 49, 31));
        p2label->setFont(font2);
        p1input = new QLineEdit(centralwidget);
        p1input->setObjectName("p1input");
        p1input->setGeometry(QRect(130, 130, 121, 31));
        p2input = new QLineEdit(centralwidget);
        p2input->setObjectName("p2input");
        p2input->setGeometry(QRect(130, 170, 121, 31));
        startButt = new QPushButton(centralwidget);
        startButt->setObjectName("startButt");
        startButt->setGeometry(QRect(160, 220, 91, 24));
        startButt->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 713, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        p1label->setText(QCoreApplication::translate("MainWindow", "Player 1: ", nullptr));
        p2label->setText(QCoreApplication::translate("MainWindow", "Player 2: ", nullptr));
        startButt->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
