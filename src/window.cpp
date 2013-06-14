/******************************************************************************
  Copyright 2013 Kevin Burk (xavierholt@gmail.com)
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

#include <QtGui/QGridLayout>
#include <QtGui/QKeyEvent>
#include <QtGui/QShortcut>

Window::Window(QWidget* parent): QWidget(parent)
{
	mLayout = new QGridLayout;
	
	QPushButton* clear = new QPushButton("Clear");
	clear->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	clear->setShortcut(QString("Delete"));
	clear->setFocusPolicy(Qt::NoFocus);
	
	for(int i = 0; i < 26; ++i)
	{
		QString str('A' + i);
		Button* button = new Button(str, 3);
		button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
		button->setFocusPolicy(Qt::NoFocus);
		button->setShortcut(str);
		
		connect(clear, SIGNAL(pressed()), button, SLOT(reset()));
		
		mLayout->addWidget(button, i / 4, i % 4);
		mLetters << button;
	}
	
	mLayout->addWidget(clear, 6, 2, 1, 2);
	
	setWindowTitle("Letterbox");
	setLayout(mLayout);
}

Window::~Window()
{
	// Nothing?
}

