/********************************************************************************
** Form generated from reading UI file 'QtGuiTest.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUITEST_H
#define UI_QTGUITEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiTestClass)
    {
        if (QtGuiTestClass->objectName().isEmpty())
            QtGuiTestClass->setObjectName(QStringLiteral("QtGuiTestClass"));
        QtGuiTestClass->resize(600, 400);
        menuBar = new QMenuBar(QtGuiTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiTestClass->setStatusBar(statusBar);

        retranslateUi(QtGuiTestClass);

        QMetaObject::connectSlotsByName(QtGuiTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTestClass)
    {
        QtGuiTestClass->setWindowTitle(QApplication::translate("QtGuiTestClass", "QtGuiTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTestClass: public Ui_QtGuiTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITEST_H
