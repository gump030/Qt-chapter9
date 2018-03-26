/********************************************************************************
** Form generated from reading UI file 'FileInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINFO_H
#define UI_FILEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_FileInfoClass
{
public:

    void setupUi(QDialog *FileInfoClass)
    {
        if (FileInfoClass->objectName().isEmpty())
            FileInfoClass->setObjectName(QStringLiteral("FileInfoClass"));
        FileInfoClass->resize(600, 400);

        retranslateUi(FileInfoClass);

        QMetaObject::connectSlotsByName(FileInfoClass);
    } // setupUi

    void retranslateUi(QDialog *FileInfoClass)
    {
        FileInfoClass->setWindowTitle(QApplication::translate("FileInfoClass", "FileInfo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileInfoClass: public Ui_FileInfoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINFO_H
