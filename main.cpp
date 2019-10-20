#include "MainProgram.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainProgram w;
	w.show();
	return a.exec();
}
