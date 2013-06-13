#include "window.h"
//#include "button.h"

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

