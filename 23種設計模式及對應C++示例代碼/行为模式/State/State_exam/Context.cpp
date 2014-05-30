// Context.cpp: implementation of the Context class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Context.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include "State.h"
Context::Context(){}

Context::Context(State* state)
{
	this->_state = state;
}
Context::~Context(){delete _state;}

void Context::OprationInterface()
{
	_state->OperationInterface();
}

bool Context::ChangeState(State* state)
{ ///_state->ChangeState(this,state); 
	this->_state = state;
	return true; 
}

void Context::OperationChangStateLarge()
{
	_state->OperationChangeStateLarge(this);
}

void Context::OperationChangStateSmall()
{
	_state->OperationChangeStateSmall(this);
}