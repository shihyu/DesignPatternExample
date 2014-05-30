// Colleage.h: interface for the Colleage class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COLLEAGE_H__CFCDCD98_9F72_4929_9AC8_6607D3CF4332__INCLUDED_)
#define AFX_COLLEAGE_H__CFCDCD98_9F72_4929_9AC8_6607D3CF4332__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <string>
using namespace std;

class Mediator;

class Colleage
{
public:
	virtual ~Colleage();
	virtual void Aciton() = 0;
	virtual void SetState(const string& sdt) = 0;
	virtual string GetState() = 0;
protected:
	Colleage();
	Colleage(Mediator* mdt);
	Mediator* _mdt;
private:
};

class ConcreteColleageA:public Colleage
{
public:
	ConcreteColleageA();
	ConcreteColleageA(Mediator* mdt);
	~ConcreteColleageA();
	void Aciton();
	void SetState(const string& sdt);
	string GetState();
protected:
private:
	string _sdt;
};

class ConcreteColleageB:public Colleage
{
public:
	ConcreteColleageB();
	ConcreteColleageB(Mediator* mdt);
	~ConcreteColleageB();
	void Aciton();
	void SetState(const string& sdt);
	string GetState();
protected:
private:
	string _sdt;
};

#endif // !defined(AFX_COLLEAGE_H__CFCDCD98_9F72_4929_9AC8_6607D3CF4332__INCLUDED_)
