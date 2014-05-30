// Subject.h: interface for the Subject class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SUBJECT_H__59E1C05B_8698_44C5_B114_1B7C843E0057__INCLUDED_)
#define AFX_SUBJECT_H__59E1C05B_8698_44C5_B114_1B7C843E0057__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <list>
#include <string>
using namespace std;
typedef string State;
class Observer;

class Subject
{
public:
	virtual ~Subject();
	void Attach(Observer* obv);
	void Detach(Observer* obv);
	void Notify();
	virtual void SetState(const State& st) = 0;
	virtual State GetState() = 0;
protected:
	Subject();
private:
	list<Observer* >* _obvs;
};

class ConcreteSubject:public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	State GetState();
	void SetState(const State& st);
protected:
private:
	State _st;
};
#endif // !defined(AFX_SUBJECT_H__59E1C05B_8698_44C5_B114_1B7C843E0057__INCLUDED_)
