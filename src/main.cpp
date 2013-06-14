/******************************************************************************
    This file is part of LetterBox.

  LetterBox is free software: you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation, either version 3 of the License, or (at your option)
  any later version.
  
  LetterBox is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.
  
  You should have received a copy of the GNU General Public License
  along with LetterBox.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#include "window.h"

#include <QtCore/QFile>
#include <QtGui/QApplication>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	
	Window win;
	QFile style("style.css");
	style.open(QIODevice::ReadOnly);
	win.setStyleSheet(style.readAll());
	win.show();
	
	return app.exec();
}

