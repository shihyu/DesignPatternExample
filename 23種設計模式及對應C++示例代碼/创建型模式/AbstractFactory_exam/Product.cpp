#include "stdafx.h"
#include "Product.h"

AbstractProductA::AbstractProductA(){}
AbstractProductA::~AbstractProductA(){}
AbstractProductB::AbstractProductB(){}
AbstractProductB::~AbstractProductB(){}

ProductA1::ProductA1()
{
	cout<<"一厂产品A..."<<endl;
}

ProductA1::~ProductA1(){}

ProductA2::ProductA2()
{
	cout<<"二厂产品A..."<<endl;
}

void ProductA1::fun()
{
	cout<<"一厂产品A的行为"<<endl;
}

void ProductA2::fun()
{
	cout<<"二厂产品A的行为"<<endl;
}

ProductA2::~ProductA2(){}

ProductB1::ProductB1()
{
	cout<<"一厂产品B..."<<endl;
}

ProductB1::~ProductB1(){}

ProductB2::ProductB2()
{
	cout<<"二厂产品B..."<<endl;
}

void ProductB1::fun()
{
	cout<<"一厂产品B的行为"<<endl;
}

void ProductB2::fun()
{
	cout<<"二厂产品B的行为"<<endl;
}

ProductB2::~ProductB2(){}

