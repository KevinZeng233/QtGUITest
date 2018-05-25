#include "PaintedWidget.h"
#include <QBitmap>

PaintedWidget::PaintedWidget()
{
	resize(1000, 600);
	setWindowTitle(tr("Paint Demo"));
}

PaintedWidget::~PaintedWidget()
{

}

void PaintedWidget::paintEvent(QPaintEvent *event)
{
	//QPainter painter(this);
	//painter.drawLine(80, 100, 650, 500);
	//painter.setPen(Qt::red);

	//painter.drawRect(10, 10, 100, 400);
	//painter.setPen(QPen(Qt::green, 5, Qt::DashDotDotLine));
	//painter.setBrush(Qt::blue);

	//painter.drawEllipse(50, 150, 400, 200);

	////4个点
	//QPointF points[4] = {
	//	QPointF(100.0, 80.0),
	//	QPointF(200.0, 10.0),
	//	QPointF(800.0, 30.0),
	//	QPointF(900.0, 70.0)
	//};
	//painter.setPen(Qt::red);
	//painter.drawConvexPolygon(points, 4);
	//
	////图片
	//QRectF target(10.0, 20.0, 80.0, 60.0);
	//QRectF source(0.0, 0.0, 70.0, 40.0);
	//QImage image("Resources/bg.jpg");
	//painter.drawImage(target, image, source);


	////反走样技术
	//QPainter painter(this);
	//painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
	//painter.setBrush(Qt::yellow);
	//painter.drawEllipse(50, 150, 200, 150);

	//painter.setRenderHint(QPainter::Antialiasing, true);
	//painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
	//painter.setBrush(Qt::yellow);
	//painter.drawEllipse(300, 150, 200, 150);

	//旋转
	//QPainter painter(this);
	//QFont font("Courier", 24);
	//painter.setFont(font);
	//painter.drawText(150, 150, "Hello, world!");
	//QTransform transform;
	//transform.rotate(+45.0);
	//painter.setWorldTransform(transform);
	//painter.drawText(150, 150, "Hello, world!");

	//绘图设备
	QPainter painter(this);
	QPixmap pixmap("Resources/sogo2.png");
	QBitmap bitmap("Resources/sogo2.png");
	painter.drawPixmap(10, 10, 128, 128, pixmap);
	painter.drawPixmap(140, 10, 128, 128, bitmap);

	QPixmap pixmap2("Resources/sogo.png");
	QBitmap bitmap2("Resources/sogo.png");
	painter.drawPixmap(10, 140, 128, 128, pixmap2);
	painter.drawPixmap(140, 140, 128, 128, bitmap2);
}
