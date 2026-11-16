#include "Event.h"

#include <iostream>
#include <string.h>

using namespace std;

		// constructeur

Event::Event ()
{
	#ifdef DEBUG
	cout<<"Constructeur par defaut d'Event"<<endl;
	#endif
	setCode(0);
	title=nullptr;
}

Event::Event(int c, const char * pTitle)
{
	#ifdef DEBUG
	cout<<"Constructeur par defaut d'Event code"<<c<<"title :"<<pTitle<<endl;
	#endif
	setCode(c);
	title = nullptr;
	setTitle(pTitle);
}

Event::Event(const Event &source)
{
	setCode(source.getCode());
	title=nullptr
	setTitle(source.getTitle());
}

		// Méthodes publiques classiques

void Event::display() const
{
	cout<<"code : "<<code;
	if (title!=nullptr)
		cout<<" titre : "<<title;
	else
		cout<<" pas de titre ";
}

Event::-Event()
{
	if (title!=nullptr)
	{
		delete[] title;
	}
}

		// Setters et Getters

void Event::setCode(int val)
{
	code=val;
}

void setTitle(const char *pTitle)
{
	if(pTitle != nullptr)
	{
		if(pTitle!=nullptr)
		{
			delete(pTitle);
			
		}

		title = new char[strlen(pTitle)+1];
		strcpy(title.pTitle);
	}
}

int getCode() const
{
	return code;
}

const char * Event::getTitle() const
{
	return title;
}
