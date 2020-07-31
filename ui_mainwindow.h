/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Sign;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_Subtract;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_Equalsto;
    QPushButton *pushButton_Decimal;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 730);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #9E9B9B;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 130));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"background-color: white;\n"
"border-radius:30px;\n"
"font-size: 35px;\n"
"}\n"
"\n"
""));
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(0, 130, 120, 120));
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: red;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_Sign = new QPushButton(centralwidget);
        pushButton_Sign->setObjectName(QString::fromUtf8("pushButton_Sign"));
        pushButton_Sign->setGeometry(QRect(120, 130, 120, 120));
        pushButton_Sign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(240, 130, 120, 120));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_Add = new QPushButton(centralwidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(360, 370, 120, 120));
        pushButton_Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(360, 130, 120, 120));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 250, 120, 120));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 250, 120, 120));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 250, 120, 120));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_Multiply = new QPushButton(centralwidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        pushButton_Multiply->setGeometry(QRect(360, 250, 120, 120));
        pushButton_Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(240, 370, 120, 120));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 370, 120, 120));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 370, 120, 120));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_Subtract = new QPushButton(centralwidget);
        pushButton_Subtract->setObjectName(QString::fromUtf8("pushButton_Subtract"));
        pushButton_Subtract->setGeometry(QRect(360, 490, 120, 120));
        pushButton_Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 490, 120, 120));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 490, 120, 120));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 490, 120, 120));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_Equalsto = new QPushButton(centralwidget);
        pushButton_Equalsto->setObjectName(QString::fromUtf8("pushButton_Equalsto"));
        pushButton_Equalsto->setGeometry(QRect(360, 610, 120, 120));
        pushButton_Equalsto->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: orange;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: white;\n"
"}\n"
"\n"
""));
        pushButton_Decimal = new QPushButton(centralwidget);
        pushButton_Decimal->setObjectName(QString::fromUtf8("pushButton_Decimal"));
        pushButton_Decimal->setGeometry(QRect(240, 610, 120, 120));
        pushButton_Decimal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 610, 240, 120));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 60px;\n"
"background-color: white;\n"
"font-size: 35px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: black;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_Multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_Equalsto->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_Decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
