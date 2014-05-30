// Subject.cpp: implementation of the Subject class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <list>
using namespace std;
typedef string state;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


Subject::Subject()
{ //****在模板的使用之前一定要new，创建 
	_obvs = new list<Observer*>;
	cout<<"已经为科目对象创建一个观察者列表,";
}
Subject::~Subject(){}

void Subject::Attach(Observer* obv)
{
	_obvs->push_front(obv);
}

void Subject::Detach(Observer* obv)
{
	if (obv != NULL) _obvs->remove(obv);
}

void Subject::Notify()
{
	list<Observer*>::iterator it;
	cout<<(_obvs->empty());
	it = _obvs->begin();
	for (;it != _obvs->end();it++)
	{//关于模板和iterator的用法
		(*it)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject()
{
	cout<<"已经生成一个科目对象."<<endl;;
	_st = '\0';
}

ConcreteSubject::~ConcreteSubject(){ }
State ConcreteSubject::GetState(){ return _st;}
void ConcreteSubject::SetState(const State& st){ _st = st;}
