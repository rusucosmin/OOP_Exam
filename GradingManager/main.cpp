#include "gradingmanager.h"
#include <QtWidgets/QApplication>
#include "teacheradmin.hpp"
#include <Repository.h>
#include <Controller.h>
#include <exception>
#include <qmessagebox.h>
#include <GradeException.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	try {
		Repository* r = new Repository();
		Controller* c = new Controller(r);
		TeacherAdmin h(c);
		r->attach((Observer *)&h);
		h.show();
		vector <GradingManager*> v;
		for(auto it : r->getTeachers()) {
			GradingManager *w = new GradingManager(c, it);
			r->attach((Observer *)w);
			w->show();
			v.push_back(w);
		}
		int code = a.exec();
		for (auto it : v)
			delete it;
		delete c;
		delete r;
		return code;
	}
	catch (GradeException &e) {
		QMessageBox::warning(Q_NULLPTR, "Eroare", QString(e.what()), QMessageBox::Ok, QMessageBox::Ok);
	}
	catch (std::runtime_error &e) {
		QMessageBox::warning(Q_NULLPTR, "Eroare", QString(e.what()), QMessageBox::Ok, QMessageBox::Ok);
	}
	catch (std::exception &e) {
		QMessageBox::warning(Q_NULLPTR, "Eroare", QString(e.what()), QMessageBox::Ok, QMessageBox::Ok);
	}

	
return		0;
}
