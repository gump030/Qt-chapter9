/********************************************************************************
** Form generated from reading UI file 'binaryFIle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYFILE_H
#define UI_BINARYFILE_H

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

class Ui_binaryFIleClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *binaryFIleClass)
    {
        if (binaryFIleClass->objectName().isEmpty())
            binaryFIleClass->setObjectName(QStringLiteral("binaryFIleClass"));
        binaryFIleClass->resize(600, 400);
        menuBar = new QMenuBar(binaryFIleClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        binaryFIleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(binaryFIleClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        binaryFIleClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(binaryFIleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        binaryFIleClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(binaryFIleClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        binaryFIleClass->setStatusBar(statusBar);

        retranslateUi(binaryFIleClass);

        QMetaObject::connectSlotsByName(binaryFIleClass);
    } // setupUi

    void retranslateUi(QMainWindow *binaryFIleClass)
    {
        binaryFIleClass->setWindowTitle(QApplication::translate("binaryFIleClass", "binaryFIle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class binaryFIleClass: public Ui_binaryFIleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYFILE_H
