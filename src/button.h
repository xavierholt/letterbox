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

