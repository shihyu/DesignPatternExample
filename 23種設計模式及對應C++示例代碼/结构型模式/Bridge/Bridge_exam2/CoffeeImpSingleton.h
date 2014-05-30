// CoffeeImpSingleton.h: interface for the CoffeeImpSingleton class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COFFEEIMPSINGLETON_H__2E0C0384_7FCF_45C6_A8A5_DC1758821509__INCLUDED_)
#define AFX_COFFEEIMPSINGLETON_H__2E0C0384_7FCF_45C6_A8A5_DC1758821509__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "CoffeeImp.h"


class CoffeeImpSingleton  
{
public:
	static CoffeeImpSingleton* getCoffeeImpSingleton()
	{
		if(coffeeImpSingleton==0)
		{
			coffeeImpSingleton=new CoffeeImpSingleton();
		}
		return coffeeImpSingleton;
	}
	void setCoffeeImp(CoffeeImp* coffeeImpIn)
	{
		coffeeImp = coffeeImpIn;
	}
	CoffeeImp* getTheCoffeeImp()
	{
		return coffeeImp;
	}	
private:
	CoffeeImpSingleton();
	static CoffeeImpSingleton* coffeeImpSingleton;
    CoffeeImp* coffeeImp;
};
//CoffeeImpSingleton* CoffeeImpSingleton::coffeeImpSingleton=0;
#endif // !defined(AFX_COFFEEIMPSINGLETON_H__2E0C0384_7FCF_45C6_A8A5_DC1758821509__INCLUDED_)
