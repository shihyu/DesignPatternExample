// Template.h: interface for the Template class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEMPLATE_H__8EEB80A0_1C4D_43DC_84E7_1D2A992B9D30__INCLUDED_)
#define AFX_TEMPLATE_H__8EEB80A0_1C4D_43DC_84E7_1D2A992B9D30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;

class AbstractClass
{
public:
	virtual ~AbstractClass(){}
	void CommonMethod()
	{
		cout<<"这是本类族公共方法"<<endl;
	}
	void TemplateMethod()
	{
		this->PrimitiveOperation1();
		this->PrimitiveOperation2();
	} 
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	AbstractClass(){}
private:
};

class ConcreteClass1:public AbstractClass
{
public:
	ConcreteClass1(){}
	~ConcreteClass1(){}
protected:
	void PrimitiveOperation1()
	{
		cout<<"子类一的方法一"<<endl;
	}
	void PrimitiveOperation2()
	{
		cout<<"子类一的方法二"<<endl;
	}
private:
};

class ConcreteClass2:public AbstractClass
{
public:
	ConcreteClass2(){}
	~ConcreteClass2(){}
protected:
	void PrimitiveOperation1()
	{
		cout<<"子类二的方法一"<<endl;
	}
	void PrimitiveOperation2()
	{
		cout<<"子类二的方法二"<<endl;
	}
private:
};

#endif // !defined(AFX_TEMPLATE_H__8EEB80A0_1C4D_43DC_84E7_1D2A992B9D30__INCLUDED_)
