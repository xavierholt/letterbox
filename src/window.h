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

