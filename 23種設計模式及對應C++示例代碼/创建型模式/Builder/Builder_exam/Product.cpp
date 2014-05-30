// Product.cpp: implementation of the Product class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Product.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Product::Product()
{
	//ProducePart();
}

Product::~Product()
{

}

void Product::ProducePart()
{
	cout<<"build part of product.."<<endl;
}

void Product::fun()
{
	cout<<"产品功能"<<endl;
}
