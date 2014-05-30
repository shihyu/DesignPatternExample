// Element.h: interface for the Element class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ELEMENT_H__EBCB876D_4845_494D_AC5F_96963C4DB6D3__INCLUDED_)
#define AFX_ELEMENT_H__EBCB876D_4845_494D_AC5F_96963C4DB6D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;


class Visitor;

class Element
{
public:
	virtual ~Element(){}
	virtual void Accept(Visitor* vis) = 0;
protected:
	Element(){}
private:
};

class ConcreteElementA:public Element
{
public:
	ConcreteElementA(){cout<<"你好，这里是元素A"<<endl;}
	~ConcreteElementA(){}
	void Accept(Visitor* vis);
protected:
private:
};

class ConcreteElementB:public Element
{
public:
	ConcreteElementB(){cout<<"你好，这里是元素B"<<endl;}
	~ConcreteElementB(){}
	void Accept(Visitor* vis);
protected:
private:
};

#endif // !defined(AFX_ELEMENT_H__EBCB876D_4845_494D_AC5F_96963C4DB6D3__INCLUDED_)
