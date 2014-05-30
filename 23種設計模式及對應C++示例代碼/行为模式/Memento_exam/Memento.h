// Memento.h: interface for the Memento class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEMENTO_H__27FB5BD8_98C9_46D6_9338_8F67FD38D28A__INCLUDED_)
#define AFX_MEMENTO_H__27FB5BD8_98C9_46D6_9338_8F67FD38D28A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
using namespace std;
class Memento;

class Originator
{
public:
	typedef string State;
	Originator();
	Originator(const State& sdt);
	~Originator();
	Memento* CreateMemento();
	void SetMemento(Memento* men);
	void RestoreToMemento(Memento* mt);
	State GetState();
	void SetState(const State& sdt);
	void PrintState();
protected:
private:
	State _sdt;
	Memento* _mt;
};

class Memento
{
public:
protected:
private: 
	//这是最关键的地方，将Originator为friend类，可以访问内部信息，但是其他类不能访问 
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State& sdt);
	~Memento();
	void SetState(const State& sdt);
	State GetState();
private:
	State _sdt;
};

#endif // !defined(AFX_MEMENTO_H__27FB5BD8_98C9_46D6_9338_8F67FD38D28A__INCLUDED_)
