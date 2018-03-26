/********************************************************************************
** Form generated from reading UI file 'TextFile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFILE_H
#define UI_TEXTFILE_H

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

class Ui_TextFileClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextFileClass)
    {
        if (TextFileClass->objectName().isEmpty())
            TextFileClass->setObjectName(QStringLiteral("TextFileClass"));
        TextFileClass->resize(600, 400);
        menuBar = new QMenuBar(TextFileClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TextFileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextFileClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextFileClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TextFileClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TextFileClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TextFileClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextFileClass->setStatusBar(statusBar);

        retranslateUi(TextFileClass);

        QMetaObject::connectSlotsByName(TextFileClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextFileClass)
    {
        TextFileClass->setWindowTitle(QApplication::translate("TextFileClass", "TextFile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextFileClass: public Ui_TextFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFILE_H
