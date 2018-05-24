#include "QtGuiTest.h"
#include "EventLabel.h"
QtGuiTest::QtGuiTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//open
	openAction = new QAction(tr("&Open"),this);
	openAction->setShortcut(QKeySequence::Open);
	openAction->setStatusTip(tr("open a file"));
	openAction->setIcon(QIcon("Resources/timg.jpg"));
	connect(openAction,SIGNAL(triggered()),this,SLOT(open()));

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);

	//Input
	this->menuBar()->addAction(tr("Input"), this, SLOT(Input()));//顶级菜单添加槽
	
	//MouesEvent
	this->menuBar()->addAction(tr("MouseEvent"), this, SLOT(MouseEvent()));

	//exit
	this->menuBar()->addAction(tr("Exit"), this, SLOT(Exit()));

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);

	//color
	openAction_Color = new QAction(tr("Color"), this);
	//openAction_Color->setShortcut(QKeySequence::Open);
	openAction_Color->setStatusTip(tr("open a file"));
	openAction_Color->setIcon(QIcon("Resources/tiaos.jpg"));
	connect(openAction_Color, SIGNAL(triggered()), this, SLOT(openColor()));

	file->addAction(openAction_Color);
	toolBar->addAction(openAction_Color);

	//critical
	openAction_critical = new QAction(tr("critial"),this);
	file->addAction(openAction_critical);
	connect(openAction_critical, SIGNAL(triggered()), this, SLOT(critical()));

	//action_imgMessageBox
	action_imgMessageBox = new QAction(tr("imgMessage"), this);
	file->addAction(action_imgMessageBox);
	connect(action_imgMessageBox, SIGNAL(triggered()), this, SLOT(imgMessage()));

	//
	msgLabel = new QLabel();
	msgLabel->setMinimumSize(msgLabel->sizeHint());
	msgLabel->setAlignment(Qt::AlignCenter);

	statusBar()->addWidget(msgLabel);
	statusBar()->setStyleSheet(QString("QStatusBar::item{border: 0px}"));//消除底部竖线

}

void QtGuiTest::open()
{
	//QMessageBox::information(NULL,tr("Open"),tr("Open a file "));

	//方式1
	//QString path = QFileDialog::getOpenFileName(this,tr("Open Image"),".",tr("ImageFiles(*.jpg *.png)"));
	//if (path.length() == 0)
	//{
	//	QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	//} 
	//else
	//{
	//	QMessageBox::information(NULL, tr("Path"), tr("You selected ") + path);
	//}

	//方式2
	QFileDialog *fileDialog = new QFileDialog(this);
	fileDialog->setWindowTitle(tr("Open Image"));
	fileDialog->setDirectory(".");
	fileDialog->setFilter(QDir::AllDirs);

	QStringList filters;
	filters << "Image files (*.png *.xpm *.jpg)"
		<< "Text files (*.txt)"
		<< "Any files (*)";

	fileDialog->setNameFilters(filters);//就是这个函数咯

	if (fileDialog->exec() == QDialog::Accepted)
	{
		QString path = fileDialog->selectedFiles()[0];
		QMessageBox::information(NULL, tr("Path"), tr("You selected ") + path);
	}
	else
	{
		QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
	}
}

void QtGuiTest::openColor()
{
	QColor color = QColorDialog::getColor(Qt::white, this);
	QString msg = QString("r: %1, g: %2, b: %3").arg(QString::number(color.red()), QString::number(color.green()), QString::number(color.blue()));
	QMessageBox::information(NULL, "Selected color", msg);
	
}

void QtGuiTest::critical()
{
	//QMessageBox::critical(NULL, "critical", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

	QMessageBox msgBox;
	msgBox.setText("The document has been modified.");
	msgBox.setInformativeText("Do you want to save your changes?");
	msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Save);
	int ret = msgBox.exec();
	qDebug("ret:%d", ret);
	if (ret == QMessageBox::Save)
	{
		qDebug("Save");
	}
	else if(ret == QMessageBox::Discard)
	{
		qDebug("Discard");
	}
}

void QtGuiTest::imgMessage()
{
	QMessageBox message(QMessageBox::NoIcon, "Title", "Content with icon.");
	message.setIconPixmap(QPixmap("Resources/bg.jpg"));
	message.exec();
}

void QtGuiTest::Input()
{
	bool isOK = false;
	QString text = QInputDialog::getText(NULL, "Input Dialog",
		"Please input your comment",
		QLineEdit::Normal,
		"your comment",
		&isOK);

	if (isOK) 
	{
		QMessageBox::information(NULL, "Information",
			"Your comment is: <b>" + text + "</b>",
			QMessageBox::Yes | QMessageBox::No,
			QMessageBox::Yes);
	}
}

void QtGuiTest::MouseEvent()
{
	EventLabel *label = new EventLabel;
	label->setWindowTitle("MouseEvent Demo");
	label->resize(400, 200);
	label->show();
}

void QtGuiTest::Exit()
{
	qApp->quit();
}
