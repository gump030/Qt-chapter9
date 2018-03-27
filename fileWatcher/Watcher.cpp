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
	//读取命令行指定的目录作为监视目录。
	if (args.count()>1)
	{
		path = args[1];
	}
	else
	{
		path = QDir::currentPath();
	}

	pathLabel = new QLabel;
	pathLabel->setText(tr("监视的目录：") + path);
	QVBoxLayout *mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(pathLabel);

	fsWatcher.addPath(path);
	connect(&fsWatcher, SIGNAL(directoryChanged(QString)), this, SLOT(directoryChanged(QString)));
}

void Watcher::directoryChanged(QString path)
{
	QMessageBox::information(NULL, tr("目录发生变化"), path);
}
