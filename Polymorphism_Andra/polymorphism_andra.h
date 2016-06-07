#ifndef POLYMORPHISM_ANDRA_H
#define POLYMORPHISM_ANDRA_H

#include <QtWidgets/QMainWindow>
#include "ui_polymorphism_andra.h"

class Polymorphism_Andra : public QMainWindow
{
	Q_OBJECT

public:
	Polymorphism_Andra(QWidget *parent = 0);
	~Polymorphism_Andra();

private:
	Ui::Polymorphism_AndraClass ui;
};

#endif // POLYMORPHISM_ANDRA_H
