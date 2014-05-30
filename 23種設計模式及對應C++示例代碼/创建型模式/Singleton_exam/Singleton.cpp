// Singleton.cpp: implementation of the Singleton class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Singleton.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
Singleton* Singleton::_instance=0;

Singleton::Singleton()
{
	cout<<"Singleton...."<<endl;
}

Singleton::~Singleton()
{

}

Singleton* Singleton::Instance()
{
	if (_instance == 0)
	{
		_instance = new Singleton();
	}
	return _instance; 
}