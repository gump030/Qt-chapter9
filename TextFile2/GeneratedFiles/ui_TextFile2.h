/********************************************************************************
** Form generated from reading UI file 'TextFile2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFILE2_H
#define UI_TEXTFILE2_H

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

class Ui_TextFile2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextFile2Class)
    {
        if (TextFile2Class->objectName().isEmpty())
            TextFile2Class->setObjectName(QStringLiteral("TextFile2Class"));
        TextFile2Class->resize(600, 400);
        menuBar = new QMenuBar(TextFile2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TextFile2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextFile2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextFile2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(TextFile2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TextFile2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TextFile2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextFile2Class->setStatusBar(statusBar);

        retranslateUi(TextFile2Class);

        QMetaObject::connectSlotsByName(TextFile2Class);
    } // setupUi

    void retranslateUi(QMainWindow *TextFile2Class)
    {
        TextFile2Class->setWindowTitle(QApplication::translate("TextFile2Class", "TextFile2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextFile2Class: public Ui_TextFile2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFILE2_H
