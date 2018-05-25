#pragma once
#include <QWidget>
#include <QPainter> 
class PaintedWidget:public QWidget
{
public:
	PaintedWidget();
	~PaintedWidget();

protected:
	virtual void paintEvent(QPaintEvent *event);
};

