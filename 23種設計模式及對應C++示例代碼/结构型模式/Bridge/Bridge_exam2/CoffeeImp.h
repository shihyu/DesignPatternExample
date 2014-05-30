// CoffeeImp.h: interface for the CoffeeImp class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COFFEEIMP_H__36BA6975_E825_4AC1_B784_E26E14E50B43__INCLUDED_)
#define AFX_COFFEEIMP_H__36BA6975_E825_4AC1_B784_E26E14E50B43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iostream"
#include "string"
using namespace std;

class CoffeeImp  
{
public:
	CoffeeImp();
	~CoffeeImp(){}
	virtual void pourCoffeeImp(string cup)=0;
};

//行为操作加加奶
class MilkCoffeeImp:public CoffeeImp
{
public:
	MilkCoffeeImp(){}
	void pourCoffeeImp(string cup)
	{
		cout<<cup<<"加了美味的牛奶"<<endl;
	}
};

//行为操作不加奶
class FragrantCoffeeImp:public CoffeeImp
{
public:
	FragrantCoffeeImp(){}
	void pourCoffeeImp(string cup)
	{
		cout<<cup<<"什么也没加,清香"<<endl;
	}
};
#endif // !defined(AFX_COFFEEIMP_H__36BA6975_E825_4AC1_B784_E26E14E50B43__INCLUDED_)
