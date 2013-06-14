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

#include "button.h"

#include <QtGui/QStyle>

Button::Button(const QString& label, int nstates, QWidget* parent): QPushButton(label, parent)
{
	setNumStates(nstates);
	setState(0);
	
	connect(this, SIGNAL(pressed()), this, SLOT(toggle()));
}

int Button::getNumStates() const
{
	return m_numStates;
}

int Button::getState() const
{
	return m_state;
}

void Button::reset()
{
	setState(0);
}

void Button::setState(int s)
{
	m_state = s % getNumStates();
	style()->unpolish(this);
	style()->polish(this);
}

void Button::setNumStates(int n)
{
	m_numStates = n;
	setState(getState());
}

void Button::toggle()
{
	setState(getState() + 1);
}

