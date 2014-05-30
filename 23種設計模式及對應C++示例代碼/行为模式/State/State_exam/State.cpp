// State.cpp: implementation of the State class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "State.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include "Context.h"
#include <iostream>
using namespace std;

bool State::ChangeState(Context* con,State* st)
{
	con->ChangeState(st);
	return true;
}

void ConcreteStateA::OperationInterface ()
{
	cout<<"状态A的功能接口"<<endl;
}

void ConcreteStateA::OperationChangeStateLarge(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateB());
	//con->ChangeState(new ConcreteStateB());
}

void ConcreteStateA::OperationChangeStateSmall(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateC());
	//con->ChangeState(new ConcreteStateC());
}


void ConcreteStateB::OperationInterface ()
{
	cout<<"状态B的功能接口......"<<endl;
}

void ConcreteStateB::OperationChangeStateLarge(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateC());
	//con->ChangeState(new ConcreteStateC());
}

void ConcreteStateB::OperationChangeStateSmall(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateA());
	//con->ChangeState(new ConcreteStateA());
}

void ConcreteStateC::OperationInterface ()
{
	cout<<"状态C的功能接口......"<<endl;
}

void ConcreteStateC::OperationChangeStateLarge(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateA());
	//con->ChangeState(new ConcreteStateA());
}

void ConcreteStateC::OperationChangeStateSmall(Context* con)
{
	OperationInterface();
	this->ChangeState(con,new ConcreteStateB());
	//con->ChangeState(new ConcreteStateB());
}