#include "binaryFIle.h"
#include <QtDebug>
#include <QFile>
#include <QDataStream>
#include <QDate>
binaryFIle::binaryFIle(QWidget *parent)
	: QMainWindow(parent)
{
	fileFun();
}

void binaryFIle::fileFun()
{
	QFile file("binary.dat");
	file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	QDataStream out(&file);                             //���������л�
	out << QString(tr("�ܺο���"));                      //�ַ������л�
	out << QDate::fromString("1994/09/25", "yyyy/MM/dd");
	out << (qint32)19;                                 	//�������л�
	file.close();

	file.setFileName("binary.dat");
	if (!file.open(QIODevice::ReadOnly))
	{
		qDebug() << "error!";
		return;
	}
	QDataStream in(&file);                            	//���ļ��ж�������
	QString name;
	QDate birthday;
	qint32 age;
	in >> name >> birthday >> age;                    	//��ȡ�ַ���������
	qDebug() << name << birthday << age;
	file.close();
}