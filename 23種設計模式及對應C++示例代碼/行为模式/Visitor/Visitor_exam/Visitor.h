// Visitor.h: interface for the Visitor class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_VISITOR_H__74A8BFA5_45F0_446F_AD24_DF039749ECB2__INCLUDED_)
#define AFX_VISITOR_H__74A8BFA5_45F0_446F_AD24_DF039749ECB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;

class ConcreteElementA;
class ConcreteElementB;
class Element;

class Visitor
{
public:
	virtual ~Visitor(){}
	virtual void VisitConcreteElementA(Element* elm) = 0;
	virtual void VisitConcreteElementB(Element* elm) = 0;
protected:
	Visitor(){}
private:
};

class ConcreteVisitorA:public Visitor
{
public:
	ConcreteVisitorA()
	{
		cout<<"你好，这里是A行为"<<endl;
	}
	virtual ~ConcreteVisitorA(){}
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
protected:
private:
};

class ConcreteVisitorB:public Visitor
{
public:
	ConcreteVisitorB(){cout<<"你好，这里是B行为"<<endl;}
	virtual ~ConcreteVisitorB(){}
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
protected:
private:
};


#endif // !defined(AFX_VISITOR_H__74A8BFA5_45F0_446F_AD24_DF039749ECB2__INCLUDED_)
