#include "TextFile2.h"
#include <QtWidgets/QApplication>

#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
/*qTextStream��ȡ�ı�*/
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QFile data("data.txt");
	/*����Truncate��ʾ��ԭ���ļ��е�������ա����ʱ��ʽ����Ϊ����룬ռ��10���ַ�λ��*/
	if (data.open(QFile::WriteOnly | QFile::Truncate))
	{
		QTextStream out(&data);
		out << QObject::tr("score:") << qSetFieldWidth(10) << left << 90 << endl;
	}

	return a.exec();
}