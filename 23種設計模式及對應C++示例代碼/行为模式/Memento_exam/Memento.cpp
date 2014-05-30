// Memento.cpp: implementation of the Memento class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Memento.h"
#include <iostream>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

using namespace std;
typedef string State;

Originator::Originator()
{
	_sdt = "";_mt = 0;
}

Originator::Originator(const State& sdt)
{
	_sdt = sdt;_mt = 0;
}

Originator::~Originator() {}

Memento* Originator::CreateMemento()
{
	cout<<"保存器创造成功，并将"<< _sdt<<"值保存"<<endl;
	return new Memento(_sdt);
}
State Originator::GetState() { return _sdt; }

void Originator::SetState(const State& sdt)
{
	cout<<"状态值以由"<< _sdt<<"设置为"<<sdt<<endl;
	_sdt = sdt;    
}

void Originator::PrintState()
{ cout<<"当前状态值为："<<this->_sdt<<endl;}

void Originator::SetMemento(Memento* men) {}

void Originator::RestoreToMemento(Memento* mt)
{
	this->_sdt = mt->GetState();
    cout<<"状态值恢复为"<< _sdt<<endl;
}


Memento::Memento(){ }
Memento::Memento(const State& sdt){ _sdt = sdt; }
State Memento::GetState() { return _sdt; }
void Memento::SetState(const State& sdt){ _sdt = sdt; }