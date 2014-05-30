// Composite.h: interface for the Composite class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPOSITE_H__3C170A23_7771_449F_A0B2_DA2733344D9E__INCLUDED_)
#define AFX_COMPOSITE_H__3C170A23_7771_449F_A0B2_DA2733344D9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define NULL 0 //define NULL POINTOR
#include "Component.h" 
#include <vector> 
using namespace std;

class Composite:public Component
{
public:
	Composite(){}//vector<Component*>::iterator itend = comVec.begin(); 
	~Composite(){}
public:
	//调出所有操作
	void Operation()
	{
		vector<Component*>::iterator comIter = comVec.begin();
		for(;comIter != comVec.end();comIter++)
		{
			(*comIter)->Operation();
		}
	}
//添加组件
	void Add(Component* com)
	{
		comVec.push_back(com);
	}
	//移除组件
	void Remove(Component* com)
	{
		comVec.erase(&com);
	}
	//得到组件
	Component* GetChild(int index)
	{
		return comVec[index];
	}
protected:
private:
	vector<Component*> comVec;
};
#endif // !defined(AFX_COMPOSITE_H__3C170A23_7771_449F_A0B2_DA2733344D9E__INCLUDED_)
