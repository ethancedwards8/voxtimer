// File: helloworld.cc

#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld()
: m_button("Hello World") //Creates a new button with label "Hello world".
{
	// Sets border width of the windows
	set_border_width(10);

	// When the button recieves the clicked signal, it will call the 
	// on_button_clicked() method defined below.
	m_button.signal_clicked().connect(sigc::mem_fun(*this,
				&HelloWorld::on_button_clicked));

	// This packs the button into the windows (a container)
	add(m_button);

	// The final step is to display this newly created widget...
	m_button.show();
}

HelloWorld::~HelloWorld()
{
}
void HelloWorld::on_button_clicked()
{
	std::cout << "Hello World" << std::endl;
}

