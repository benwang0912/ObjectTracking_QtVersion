#include "QtObjectTracking.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtObjectTracking w;
	
	w.show();
	return a.exec();
}
