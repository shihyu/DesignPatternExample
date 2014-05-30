// AbstractionImp.h: interface for the AbstractionImp class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ABSTRACTIONIMP_H__FABC1506_36B3_472B_A657_F271D495A1C3__INCLUDED_)
#define AFX_ABSTRACTIONIMP_H__FABC1506_36B3_472B_A657_F271D495A1C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iostream"
#include "string"
using namespace std; 

class AbstractionImp
{
public:
	virtual ~AbstractionImp(){}
	virtual void Operation()=0;
protected:
	AbstractionImp(){}
private:
};

class ConcreteAbstractionImp:public AbstractionImp
{
public:
	ConcreteAbstractionImp(){}
	~ConcreteAbstractionImp(){}
	virtual void Operation()
	{
		cout<<"默认方案...."<<endl;
	}
protected:
private:
};

class ConcreteAbstractionImpA:public AbstractionImp
{
public:
	ConcreteAbstractionImpA(){}
	~ConcreteAbstractionImpA(){}
	virtual void Operation()
	{
		cout<<"方案A...."<<endl;
	}
protected:
private:
};

class ConcreteAbstractionImpB:public AbstractionImp
{
public:
	ConcreteAbstractionImpB(){}
	~ConcreteAbstractionImpB(){}
	virtual void Operation()
	{		
		cout<<"方案B...."<<endl;
	}
protected:
private:
};

#endif // !defined(AFX_ABSTRACTIONIMP_H__FABC1506_36B3_472B_A657_F271D495A1C3__INCLUDED_)
