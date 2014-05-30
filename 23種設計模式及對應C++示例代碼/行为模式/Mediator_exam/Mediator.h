// Mediator.h: interface for the Mediator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEDIATOR_H__E972F9B1_99B9_4317_8127_C2DEE68CA471__INCLUDED_)
#define AFX_MEDIATOR_H__E972F9B1_99B9_4317_8127_C2DEE68CA471__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class Colleage;

class Mediator
{
public:
	virtual ~Mediator(){}
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator(){}
private:
};

class ConcreteMediator:public Mediator
{
public:
	ConcreteMediator(){}
	ConcreteMediator(Colleage* clgA,Colleage* clgB);
	~ConcreteMediator(){}
	void SetConcreteColleageA(Colleage* clgA);
	void SetConcreteColleageB(Colleage* clgB);
	Colleage* GetConcreteColleageA();
	Colleage* GetConcreteColleageB();
	void IntroColleage(Colleage* clgA,Colleage* clgB);
	void DoActionFromAtoB();
	void DoActionFromBtoA();
protected:
private:
	Colleage* _clgA;
	Colleage* _clgB;
};

#endif // !defined(AFX_MEDIATOR_H__E972F9B1_99B9_4317_8127_C2DEE68CA471__INCLUDED_)
