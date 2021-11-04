/********************************************************************************
** Form generated from reading UI file 'ConsoleWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWINDOW_H
#define UI_CONSOLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWindow
{
public:
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;

    void setupUi(QWidget *ConsoleWindow)
    {
        if (ConsoleWindow->objectName().isEmpty())
            ConsoleWindow->setObjectName(QString::fromUtf8("ConsoleWindow"));
        ConsoleWindow->resize(379, 300);
        textBrowser = new QTextBrowser(ConsoleWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 361, 251));
        textEdit = new QTextEdit(ConsoleWindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 260, 361, 31));

        retranslateUi(ConsoleWindow);

        QMetaObject::connectSlotsByName(ConsoleWindow);
    } // setupUi

    void retranslateUi(QWidget *ConsoleWindow)
    {
        ConsoleWindow->setWindowTitle(QCoreApplication::translate("ConsoleWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWindow: public Ui_ConsoleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWINDOW_H
