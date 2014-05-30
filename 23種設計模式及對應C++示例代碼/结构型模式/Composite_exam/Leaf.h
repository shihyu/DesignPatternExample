// Leaf.h: interface for the Leaf class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LEAF_H__94FABD2E_0477_471F_84ED_928F10699ACD__INCLUDED_)
#define AFX_LEAF_H__94FABD2E_0477_471F_84ED_928F10699ACD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Component.h"
#include <iostream>
using namespace std;

class LeafA:public Component
{
public:
	LeafA(){}
	~LeafA(){}
	void Operation()
	{
		cout<<"组成操作A....."<<endl;
	}
protected:
private:
};

class LeafB:public Component
{
public:
	LeafB(){}
	~LeafB(){}
	void Operation()
	{
		cout<<"组成操作B....."<<endl;
	}
protected:
private:
};

#endif // !defined(AFX_LEAF_H__94FABD2E_0477_471F_84ED_928F10699ACD__INCLUDED_)
