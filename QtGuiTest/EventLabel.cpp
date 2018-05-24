#include "EventLabel.h"

EventLabel::EventLabel()
{
}

EventLabel::~EventLabel()
{
}

void EventLabel::mouseMoveEvent(QMouseEvent *ev)
{
	this->setText(QString("<center><h1>Move: (%1, %2)</h1></center>").arg(QString::number(ev->x()), QString::number(ev->y())));
}

void EventLabel::mousePressEvent(QMouseEvent *ev)
{
	this->setText(QString("<center><h1>Press: (%1, %2)</h1></center>").arg(QString::number(ev->x()), QString::number(ev->y())));
}

void EventLabel::mouseReleaseEvent(QMouseEvent *ev)
{
	QString msg;
	msg.sprintf("<center><h1>Release: (%d, %d)</h1></center>",ev->x(), ev->y());
	this->setText(msg);
}

void EventLabel::closeEvent(QCloseEvent *event)
{
	if (continueToClose()) //窗口关闭，拦截
	{
		event->accept();//调用父类的响应函数
	}
	else 
	{
		event->ignore();//忽略父类的响应函数
	}
}

bool EventLabel::continueToClose()
{
	if (QMessageBox::question(this,
		tr("Quit"),
		tr("Are you sure to quit this application?"),
		QMessageBox::Yes | QMessageBox::No,
		QMessageBox::No)
		== QMessageBox::Yes) {
		return true;
	}
	else 
	{
		return false;
	}
}
