#include "guitest.h"
#include <QtWidgets/QApplication>
#include <QWidget> 
#include <QtWidgets/QSpinBox> 
#include <QtWidgets/QSlider> 
#include <QtWidgets/QHBoxLayout> 

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	guitest w;
	w.show();

	QWidget *windows = new QWidget();
	windows->setWindowTitle("Enter your age");

	QSpinBox *spinBox = new QSpinBox();
	QSlider *slider = new QSlider(Qt::Horizontal);
	spinBox->setRange(0, 130);
	slider->setRange(0, 130);

	QObject::connect(slider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
	QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
	spinBox->setValue(35);

	QHBoxLayout *layout = new QHBoxLayout();
	layout->addWidget(spinBox);
	layout->addWidget(slider);
	windows->setLayout(layout);

	windows->show();


	return a.exec();
}
