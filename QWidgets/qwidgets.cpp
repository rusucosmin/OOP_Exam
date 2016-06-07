#include "qwidgets.h"
#include "qobject.h"
#include <qmessagebox.h>

QWidgets::QWidgets(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
	QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(showMessageBox()));
}

QWidgets::~QWidgets()
{

}

void QWidgets::showMessageBox() {
	QMessageBox::warning(this, "MsgBox_title", "Body of the message box", QMessageBox::Ok);
}
