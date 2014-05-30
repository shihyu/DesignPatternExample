// Factory.cpp: implementation of the Factory class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Factory::Factory()
{

}

Factory::~Factory()
{

}


ConcreteFactory1::ConcreteFactory1()
{
	cout<<"工厂一开动"<<endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
}

Product* ConcreteFactory1::CreateProduct()
{
	return new ConcreteProduct();
}


ConcreteFactory2::ConcreteFactory2()
{
	cout<<"工厂二开动"<<endl;
}

ConcreteFactory2::~ConcreteFactory2()
{
}

Product* ConcreteFactory2::CreateProduct()
{
	return new ConcreteProduct();
}