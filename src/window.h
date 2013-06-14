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

#ifndef LETTERBOX_WINDOW_H
#define LETTERBOX_WINDOW_H

#include "button.h"

#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

class Window : public QWidget
{
protected:
	QList<Button*> mLetters;
	QGridLayout* mLayout;
	
public:
	Window(QWidget* parent = 0);
	~Window();
};

#endif

