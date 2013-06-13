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

