#include "binaryFIle.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	binaryFIle w;
	w.show();
	return a.exec();
}
