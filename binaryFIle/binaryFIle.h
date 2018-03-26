#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>

class binaryFIle : public QMainWindow
{
	Q_OBJECT

public:
	binaryFIle(QWidget *parent = Q_NULLPTR);
	void fileFun();
};
