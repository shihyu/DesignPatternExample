// Flyweight.h: interface for the Flyweight class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FLYWEIGHT_H__C538340B_3718_46A1_8C18_4773CFC166C0__INCLUDED_)
#define AFX_FLYWEIGHT_H__C538340B_3718_46A1_8C18_4773CFC166C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
using namespace std;
#include "string"
using namespace std;

class Flyweight
{
public:
	virtual ~Flyweight(){}
	virtual void Operation(){}
	//返回本类对象的描述
	string GetIntrinsicState()
	{
		return this->_intrinsicState;
	}
protected:
	//本类对象的构造器，构造一个对象并设置描述
	Flyweight(string intrinsicState)
	{
		this->_intrinsicState = intrinsicState;
	}
private:
	string _intrinsicState;//描述语句
};

class ConcreteFlyweight:public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState):Flyweight(intrinsicState)
	{
		cout<<"创建了"<<intrinsicState<<"元素"<<endl;
	}
	~ConcreteFlyweight(){}
	void Operation()
	{
		cout<<this->GetIntrinsicState()<<"元素的相关操作，可以定义"<<endl;
	}
protected:
private:
};
#endif // !defined(AFX_FLYWEIGHT_H__C538340B_3718_46A1_8C18_4773CFC166C0__INCLUDED_)
