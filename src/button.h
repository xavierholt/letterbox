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

#ifndef LETTERBOX_BUTTON_H
#define LETTERBOX_BUTTON_H

#include <QtGui/QPushButton>

class Button : public QPushButton
{Q_OBJECT
protected:
	Q_PROPERTY(int state READ getState WRITE setState);
	int m_state;
	
	Q_PROPERTY(int numStates READ getNumStates WRITE setNumStates);
	int m_numStates;
	
public:
	Button(const QString& label, int nstates, QWidget* parent = 0);
	
	int  getNumStates() const;
	int  getState() const;
	void setState(int s);
	void setNumStates(int n);
	
public slots:
	void reset();
	void toggle();
};

#endif

