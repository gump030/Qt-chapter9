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
	/*����ĳ�ֹ��˷�ʽ���Ŀ¼�µ��ļ��б�*/
	//ALLEntries�г�Ŀ¼���ļ����ʹ�����������DirsFirstΪĿ¼��������
	QFileInfoList list = dir.entryInfoList(string, QDir::AllEntries, QDir::DirsFirst);
	showFileInfoList(list);
}

/*ʵ�����û�����˫��������е�Ŀ¼������һ��Ŀ¼���򵥻�..������һ��Ŀ¼�������ı༭����ʾ��ǰ���ڵ�Ŀ¼·��*/
void FileView::showFileInfoList(QFileInfoList list)
{
	fileListWidget->clear();
	for (unsigned int i = 0; i<list.count(); i++)
	{
		//�ж���Ŀ¼�����ļ�����ʾ�ļ�����Ŀ¼����ͼ��
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
	QString str = item->text();			//����һ��Ŀ¼��������str��
	QDir dir;							//����һ��QDir����
	dir.setPath(fileLineEdit->text());	//����QDir�����·��Ϊ��ǰĿ¼·��
	dir.cd(str);						//������һ��Ŀ¼�����趨QDir�����Ŀ¼
	fileLineEdit->setText(dir.absolutePath());	//ˢ�µ�ǰ��ʾ��Ŀ¼·��
	slotShow(dir);								//��ʾ��ǰĿ¼�µ������ļ�
}
