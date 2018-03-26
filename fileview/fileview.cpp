#include "fileview.h"
#include <QStringList>
#include <QIcon>

FileView::FileView(QWidget *parent, Qt::WindowFlags f)
	: QDialog(parent, f)
{
	setWindowTitle(tr("File View"));

	fileLineEdit = new QLineEdit(tr("/"));
	fileListWidget = new QListWidget;

	mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(fileLineEdit);
	mainLayout->addWidget(fileListWidget);

	connect(fileLineEdit, SIGNAL(returnPressed()), this, SLOT(slotShow(QDir)));
	connect(fileListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(slotDirShow(QListWidgetItem*)));

	QString root = "/";
	QDir rootDir(root);
	QStringList string;
	string << "*";
	QFileInfoList list = rootDir.entryInfoList(string);
	showFileInfoList(list);
}

FileView::~FileView()
{

}

void FileView::slotShow(QDir dir)
{
	QStringList string;
	string << "*";
	/*按照某种过滤方式获得目录下的文件列表*/
	//ALLEntries列出目录、文件、和磁盘驱动器，DirsFirst为目录优先排序
	QFileInfoList list = dir.entryInfoList(string, QDir::AllEntries, QDir::DirsFirst);
	showFileInfoList(list);
}

/*实现了用户可以双击浏览器中的目录进入下一级目录，或单击..返回上一级目录，顶部的编辑框显示当前所在的目录路径*/
void FileView::showFileInfoList(QFileInfoList list)
{
	fileListWidget->clear();
	for (unsigned int i = 0; i<list.count(); i++)
	{
		//判断是目录还是文件，显示文件名和目录名及图标
		QFileInfo tmpFileInfo = list.at(i);
		if (tmpFileInfo.isDir())
		{
			QIcon icon("dir.png");
			QString fileName = tmpFileInfo.fileName();
			QListWidgetItem *tmp = new QListWidgetItem(icon, fileName);
			fileListWidget->addItem(tmp);
		}
		else if (tmpFileInfo.isFile())
		{
			QIcon icon("file.png");
			QString fileName = tmpFileInfo.fileName();
			QListWidgetItem *tmp = new QListWidgetItem(icon, fileName);
			fileListWidget->addItem(tmp);
		}
	}
}

void FileView::slotDirShow(QListWidgetItem * item)
{
	QString str = item->text();			//将下一级目录名保存在str中
	QDir dir;							//定义一个QDir对象
	dir.setPath(fileLineEdit->text());	//设置QDir对象的路径为当前目录路径
	dir.cd(str);						//根据下一级目录重新设定QDir对象的目录
	fileLineEdit->setText(dir.absolutePath());	//刷新当前显示的目录路径
	slotShow(dir);								//显示当前目录下的所有文件
}
