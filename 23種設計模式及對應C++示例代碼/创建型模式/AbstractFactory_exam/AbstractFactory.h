// AbstractFactory1.h: interface for the AbstractFactory class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ABSTRACTFACTORY1_H__28CCA5AD_AF98_419D_9A80_4BBDE9CCD056__INCLUDED_)
#define AFX_ABSTRACTFACTORY1_H__28CCA5AD_AF98_419D_9A80_4BBDE9CCD056__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA()=0;
	virtual AbstractProductB* CreateProductB()=0;
protected:
	AbstractFactory();
private:
};


class ConcreteFactory1:public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

//*
class ConcreteFactory2:public AbstractFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};
//*/

#endif // !defined(AFX_ABSTRACTFACTORY1_H__28CCA5AD_AF98_419D_9A80_4BBDE9CCD056__INCLUDED_)
