// strategy.h: interface for the strategy class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRATEGY_H__C2CEAD03_C158_4E53_9EA2_6D29D163D9F8__INCLUDED_)
#define AFX_STRATEGY_H__C2CEAD03_C158_4E53_9EA2_6D29D163D9F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
using namespace std;
//行为一抽象接口
class BehaviorOne
{
public:
	virtual void BehaviorOneMethod() = 0;
protected:
private:
};
//行为二抽象接口
class BehaviorTwo
{
public:
	virtual void BehaviorTwoMethod() = 0;
protected:
private:
};
//行为一的A方法
class BehaviorOneA:public BehaviorOne
{
public:
	void BehaviorOneMethod()
	{
		cout<<"行为一的A方法"<<endl;
	}
protected:
private:
};

//行为一的B方法
class BehaviorOneB:public BehaviorOne
{
public:
	void BehaviorOneMethod()
	{
		cout<<"行为一的B方法"<<endl;
	}
protected:
private:
};
//行为二的A方法
class BehaviorTwoA:public BehaviorTwo
{
public:
	void BehaviorTwoMethod()
	{
		cout<<"行为二的A方法"<<endl;
	}
protected:
private:
};

//行为二的B方法
class BehaviorTwoB:public BehaviorTwo
{
public:
	void BehaviorTwoMethod()
	{
		cout<<"行为二的B方法"<<endl;
	}
protected:
private:
};

#endif // !defined(AFX_STRATEGY_H__C2CEAD03_C158_4E53_9EA2_6D29D163D9F8__INCLUDED_)
