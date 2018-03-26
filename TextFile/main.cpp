#include "TextFile.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextFile w;
	w.show();
	return a.exec();
}
