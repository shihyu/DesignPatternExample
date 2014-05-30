// Observer.h: interface for the Observer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_OBSERVER_H__8045F491_4FE5_40B2_958B_7E86B3192218__INCLUDED_)
#define AFX_OBSERVER_H__8045F491_4FE5_40B2_958B_7E86B3192218__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Subject.h"
#include <string>
using namespace std;
typedef string State;

class Observer {
public:
	virtual ~Observer();
	virtual void Update(Subject* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State _st;
private:
};
class ConcreteObserverA:public Observer
{
public:
	virtual Subject* GetSubject();
	ConcreteObserverA(Subject* sub);
	virtual ~ConcreteObserverA();
//传入Subject作为参数，这样可以让一个View属于多个的Subject。
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	Subject* _sub;
};
class ConcreteObserverB:public Observer
{
public:
	virtual Subject* GetSubject();
	ConcreteObserverB(Subject* sub);
	virtual ~ConcreteObserverB();
	//传入Subject作为参数，这样可以让一个View属于多个的Subject。
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	Subject* _sub;
};

#endif // !defined(AFX_OBSERVER_H__8045F491_4FE5_40B2_958B_7E86B3192218__INCLUDED_)
