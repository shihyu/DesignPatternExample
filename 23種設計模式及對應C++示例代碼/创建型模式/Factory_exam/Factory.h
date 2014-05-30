// Factory.h: interface for the Factory class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FACTORY_H__5F220DAB_214D_46DF_B42B_FB49EE3EFE38__INCLUDED_)
#define AFX_FACTORY_H__5F220DAB_214D_46DF_B42B_FB49EE3EFE38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//#include "Product.h"
class Product;

class Factory  
{
public:
	virtual ~Factory() = 0;
	virtual Product* CreateProduct() = 0;
protected:
	Factory();
};


class ConcreteFactory1:public Factory
{
public:
	~ConcreteFactory1();
	ConcreteFactory1();
	Product* CreateProduct();
protected:
private:
};

class ConcreteFactory2:public Factory
{
public:
	~ConcreteFactory2();
	ConcreteFactory2();
	Product* CreateProduct();
protected:
private:
};
#endif // !defined(AFX_FACTORY_H__5F220DAB_214D_46DF_B42B_FB49EE3EFE38__INCLUDED_)
