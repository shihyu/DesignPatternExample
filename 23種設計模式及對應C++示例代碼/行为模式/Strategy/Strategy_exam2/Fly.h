// Fly.h: interface for the Fly class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FLY_H__D97C9C72_8B03_4B42_A135_9156BA93361E__INCLUDED_)
#define AFX_FLY_H__D97C9C72_8B03_4B42_A135_9156BA93361E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iostream"
using namespace std;

//飞的抽象接口
class FlyBehavior
{
public:
	FlyBehavior(){}
	~FlyBehavior(){}
	virtual void fly()=0;
};

//会飞
class FlyWithWings:public FlyBehavior
{
public:
    void fly()
	{
		cout<<"我会飞"<<endl;
		//实现鸭子飞行
	}
};
//不会飞

class FlyNoWay:public FlyBehavior
{
public:
	void fly()
	{
		cout<<"我不会飞"<<endl;
		//什么也不做，不会飞
     }
};

#endif // !defined(AFX_FLY_H__D97C9C72_8B03_4B42_A135_9156BA93361E__INCLUDED_)
