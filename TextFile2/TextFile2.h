#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextFile2.h"

class TextFile2 : public QMainWindow
{
	Q_OBJECT

public:
	TextFile2(QWidget *parent = Q_NULLPTR);

private:
	Ui::TextFile2Class ui;
};
