#include "CustomWidget.h"
#include "qpushbutton.h"


CustomWidget::CustomWidget(QWidget* parent) : QWidget{ parent }
{
	this->initGUI();
	this->connectSignalsAndSlots();
}


CustomWidget::~CustomWidget()
{
}

void CustomWidget::initGUI() {
	layout = new QHBoxLayout(this);
	bt = new QPushButton("&Cosmin");
	mlabel = new QLabel("1");
	layout->addWidget(bt);
	layout->addWidget(mlabel);
}

void CustomWidget::connectSignalsAndSlots() {
	QObject::connect(this->bt, SIGNAL(clicked()), this, SLOT(writeRandom()));
}
