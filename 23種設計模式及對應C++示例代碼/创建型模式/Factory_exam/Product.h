// Product.h: interface for the Product class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PRODUCT_H__775E40E0_619E_4E86_B68B_29B120030EB2__INCLUDED_)
#define AFX_PRODUCT_H__775E40E0_619E_4E86_B68B_29B120030EB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include<iostream>
using namespace std;

class Product  
{
public:
	virtual ~Product()=0;
protected:
	Product();
};

class ConcreteProduct:public Product
{
public:
	~ConcreteProduct();
	ConcreteProduct();
protected:
private:
};
#endif // !defined(AFX_PRODUCT_H__775E40E0_619E_4E86_B68B_29B120030EB2__INCLUDED_)
