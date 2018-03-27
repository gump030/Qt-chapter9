#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include <QLabel>
#include <QFileSystemWatcher>

class Watcher : public QWidget
{
	Q_OBJECT

public:
	Watcher(QWidget *parent = 0);

	public slots:
	void directoryChanged(QString path);

private:
	QLabel * pathLabel;
	QFileSystemWatcher fsWatcher;
};;
