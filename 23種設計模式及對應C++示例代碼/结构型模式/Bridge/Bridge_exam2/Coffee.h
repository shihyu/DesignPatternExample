// Coffee.h: interface for the Coffee class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COFFEE_H__0CA2FDC4_55D1_442E_A1DD_03B7D95C274A__INCLUDED_)
#define AFX_COFFEE_H__0CA2FDC4_55D1_442E_A1DD_03B7D95C274A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "CoffeeImp.h"
#include "CoffeeImpSingleton.h"
#include "iostream"
using namespace std;

class Coffee  
{
public:
	Coffee();
	virtual ~Coffee();
	void setCoffeeImp()
	{
		this->coffeeImp=CoffeeImpSingleton::getCoffeeImpSingleton()->getTheCoffeeImp();
	}
	CoffeeImp* getCoffeeImp()
	{
		return this->coffeeImp;
	}
protected:
	CoffeeImp* coffeeImp;
};

//中杯
class MediumCoffee:public Coffee
{
public:
	MediumCoffee()
	{
		setCoffeeImp();
	}
	void pourCoffee()
	{
		CoffeeImp* coffeeImp = getCoffeeImp();		
		coffeeImp->pourCoffeeImp("中杯");
	}
};

//大杯
class SuperSizeCoffee:public Coffee
{
public:
	SuperSizeCoffee()
	{
		setCoffeeImp();
	}
	void pourCoffee()
	{
		CoffeeImp* coffeeImp = getCoffeeImp();
		coffeeImp->pourCoffeeImp("大杯");
	}
};
#endif // !defined(AFX_COFFEE_H__0CA2FDC4_55D1_442E_A1DD_03B7D95C274A__INCLUDED_)
