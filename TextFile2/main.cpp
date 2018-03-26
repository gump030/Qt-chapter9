#include "TextFile2.h"
#include <QtWidgets/QApplication>

#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
/*qTextStream读取文本*/
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QFile data("data.txt");
	/*参数Truncate表示将原来文件中的内容清空。输出时格式设置为左对齐，占据10各字符位置*/
	if (data.open(QFile::WriteOnly | QFile::Truncate))
	{
		QTextStream out(&data);
		out << QObject::tr("score:") << qSetFieldWidth(10) << left << 90 << endl;
	}

	return a.exec();
}