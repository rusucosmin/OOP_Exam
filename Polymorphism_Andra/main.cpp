#include "polymorphism_andra.h"
#include <QtWidgets/QApplication>
#include <MedicalAnalysis.h>
#include <BMI.h>
#include <iostream>
#include <qlabel.h>
#include <qdebug.h>
#include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	qDebug() << "Taran" << '\n';
	Polymorphism_Andra w;
	w.show();
	return a.exec();
}
