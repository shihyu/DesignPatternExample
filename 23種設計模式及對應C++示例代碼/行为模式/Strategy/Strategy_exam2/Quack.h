// Quack.h: interface for the Quack class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_QUACK_H__B20C8843_54F3_4049_9A50_F2ABA0DDF831__INCLUDED_)
#define AFX_QUACK_H__B20C8843_54F3_4049_9A50_F2ABA0DDF831__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iostream"
using namespace std;

//叫的接口
class QuackBehavior
{
public:
	virtual void quack()=0;
};

//实现鸭子呱呱叫
class Quack:public QuackBehavior
{
public:
	void quack()
	{
		cout<<"我会呱呱叫,";
    }
};

//实现鸭子吱吱叫
class Squeak:public QuackBehavior
{
public:
	void quack()
	{
        cout<<"我会吱吱叫,";
    }
};

//什么也不做，不会叫
class MuteQuack:public QuackBehavior
{
public:
	void quack()
	{
		cout<<"我不会叫，";
	}
};



#endif // !defined(AFX_QUACK_H__B20C8843_54F3_4049_9A50_F2ABA0DDF831__INCLUDED_)
