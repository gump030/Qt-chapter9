#include "Watcher.h"
#include <QVBoxLayout>
#include <QDir>
#include <QMessageBox>
#include <QApplication>

Watcher::Watcher(QWidget *parent)
	: QWidget(parent)
{
	QStringList args = qApp->arguments();
	QString path;
	//��ȡ������ָ����Ŀ¼��Ϊ����Ŀ¼��
	if (args.count()>1)
	{
		path = args[1];
	}
	else
	{
		path = QDir::currentPath();
	}

	pathLabel = new QLabel;
	pathLabel->setText(tr("���ӵ�Ŀ¼��") + path);
	QVBoxLayout *mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(pathLabel);

	fsWatcher.addPath(path);
	connect(&fsWatcher, SIGNAL(directoryChanged(QString)), this, SLOT(directoryChanged(QString)));
}

void Watcher::directoryChanged(QString path)
{
	QMessageBox::information(NULL, tr("Ŀ¼�����仯"), path);
}
