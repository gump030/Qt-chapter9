/********************************************************************************
** Form generated from reading UI file 'fileview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEW_H
#define UI_FILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fileviewClass
{
public:

    void setupUi(QDialog *fileviewClass)
    {
        if (fileviewClass->objectName().isEmpty())
            fileviewClass->setObjectName(QStringLiteral("fileviewClass"));
        fileviewClass->resize(600, 400);

        retranslateUi(fileviewClass);

        QMetaObject::connectSlotsByName(fileviewClass);
    } // setupUi

    void retranslateUi(QDialog *fileviewClass)
    {
        fileviewClass->setWindowTitle(QApplication::translate("fileviewClass", "fileview", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fileviewClass: public Ui_fileviewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEW_H
