/********************************************************************************
** Form generated from reading UI file 'guitest.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITEST_H
#define UI_GUITEST_H

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

class Ui_guitestClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *guitestClass)
    {
        if (guitestClass->objectName().isEmpty())
            guitestClass->setObjectName(QStringLiteral("guitestClass"));
        guitestClass->resize(600, 400);
        centralWidget = new QWidget(guitestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        guitestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(guitestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        guitestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(guitestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        guitestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(guitestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        guitestClass->setStatusBar(statusBar);

        retranslateUi(guitestClass);

        QMetaObject::connectSlotsByName(guitestClass);
    } // setupUi

    void retranslateUi(QMainWindow *guitestClass)
    {
        guitestClass->setWindowTitle(QApplication::translate("guitestClass", "guitest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guitestClass: public Ui_guitestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITEST_H
