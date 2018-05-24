#pragma once
#include <QApplication> 
#include <QWidget> 
#include <QLabel> 
#include <QMouseEvent> 
#include <QMessageBox>
class EventLabel : public QLabel
{
public:
	 EventLabel();
	~EventLabel ();

	virtual void mouseMoveEvent(QMouseEvent *ev);
	virtual void mousePressEvent(QMouseEvent *ev);
	virtual void mouseReleaseEvent(QMouseEvent *ev);
	virtual void closeEvent(QCloseEvent *event);
private:
	bool continueToClose();
};

