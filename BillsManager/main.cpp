#include "billsmanager.h"
#include <QtWidgets/QApplication>
#include <Repository.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository r("bills.in");
	BillsManager w(&r);
	w.show();
	return a.exec();
}
