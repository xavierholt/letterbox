#include "window.h"

#include <QtCore/QFile>
#include <QtGui/QApplication>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	
	Window win;
	QFile style("style.qtss");
	style.open(QIODevice::ReadOnly);
	win.setStyleSheet(style.readAll());
	win.show();
	
	return app.exec();
}

