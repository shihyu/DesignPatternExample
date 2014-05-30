// Command.h: interface for the Command class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMMAND_H__FDAF5DF6_B49B_4EFD_9B3E_E9A1DA6DEA1B__INCLUDED_)
#define AFX_COMMAND_H__FDAF5DF6_B49B_4EFD_9B3E_E9A1DA6DEA1B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Reciever.h"
#include <iostream>

class Reciever;

class Command
{
public:
	virtual ~Command(){}
	virtual void Excute() = 0;
protected: Command(){}
private:
};

class ConcreteCommand:public Command
{
public:
	ConcreteCommand(Reciever* rev)
	{ this->_rev = rev;}
	~ConcreteCommand()
	{ delete this->_rev; }
	void Excute()
	{
		std::cout<<"ÃüÁîÒÑ¾­±»»½ÐÑ..."<<std::endl;
		_rev->Action();
	}
protected:
private:
	Reciever* _rev;
};


#endif // !defined(AFX_COMMAND_H__FDAF5DF6_B49B_4EFD_9B3E_E9A1DA6DEA1B__INCLUDED_)
