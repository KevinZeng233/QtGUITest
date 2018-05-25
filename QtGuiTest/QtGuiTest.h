#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiTest.h"
#include <QLabel> 
#include <QColor> 
#include <QMessageBox> 
#include <QFileDialog> 
#include <QColorDialog> 
#include <QInputDialog>

class QAction;
class QLabel;
class QColor;
class QtGuiTest : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiTest(QWidget *parent = Q_NULLPTR);

private slots:
	void open();
	void openColor();
	void critical();//弹出框
	void imgMessage();
	void Input();
	void MouseEvent();
	void Exit();
	void Painted_msg();//画板
protected:
	virtual bool event(QEvent *event);
	virtual void keyPressEvent(QKeyEvent *event);
private:
	Ui::QtGuiTestClass ui;

	QLabel *msgLabel;
	QAction *openAction;
	QAction *openAction_Color;
	QAction *openAction_critical;
	QAction *action_imgMessageBox;
	QAction *painted_msg;
};
