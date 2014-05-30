// Observer.cpp: implementation of the Observer class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Observer.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include "Subject.h"
#include <iostream>
#include <string>
using namespace std;
Observer::Observer(){ _st = '\0';}

Observer::~Observer(){}

ConcreteObserverA::ConcreteObserverA(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
	cout<<"观察者A以启动，已经在科目对象中注册"<<endl;
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sub->Detach(this);
	if (_sub != 0){delete _sub;}
}

Subject* ConcreteObserverA::GetSubject(){ return _sub; }

void ConcreteObserverA::PrintInfo()
{
	cout<<"观察者A观察到科目状态变为"<<_sub->GetState()<<"已经做出相应的反应"<<endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
	cout<<"观察者B以启动，已经在科目对象中注册"<<endl;
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sub->Detach(this);
	if (_sub != 0){ delete _sub;}
}

Subject* ConcreteObserverB::GetSubject(){return _sub;}

void ConcreteObserverB::PrintInfo()
{
	cout<<"观察者B观察到科目状态变为"<<_sub->GetState()<<"已经做出相应的反应"<<endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}
