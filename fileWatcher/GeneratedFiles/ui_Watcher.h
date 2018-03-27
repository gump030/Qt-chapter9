/********************************************************************************
** Form generated from reading UI file 'Watcher.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHER_H
#define UI_WATCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatcherClass
{
public:

    void setupUi(QWidget *WatcherClass)
    {
        if (WatcherClass->objectName().isEmpty())
            WatcherClass->setObjectName(QStringLiteral("WatcherClass"));
        WatcherClass->resize(600, 400);

        retranslateUi(WatcherClass);

        QMetaObject::connectSlotsByName(WatcherClass);
    } // setupUi

    void retranslateUi(QWidget *WatcherClass)
    {
        WatcherClass->setWindowTitle(QApplication::translate("WatcherClass", "Watcher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WatcherClass: public Ui_WatcherClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHER_H
