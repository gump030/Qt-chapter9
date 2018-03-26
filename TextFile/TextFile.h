#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextFile.h"

class TextFile : public QMainWindow
{
	Q_OBJECT

public:
	TextFile(QWidget *parent = Q_NULLPTR);

private:
	Ui::TextFileClass ui;
};
