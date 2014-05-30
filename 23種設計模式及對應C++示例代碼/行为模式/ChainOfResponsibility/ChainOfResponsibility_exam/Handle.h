// Handle.h: interface for the Handle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HANDLE_H__E2BC965A_4449_4A35_BDE5_C4BAF190EA02__INCLUDED_)
#define AFX_HANDLE_H__E2BC965A_4449_4A35_BDE5_C4BAF190EA02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
#include <string>

class Request;
class Handle  
{public:
virtual ~Handle(){}	
	virtual void HandleRequest(Request* request) = 0;//处理问题的方法	
	void SetSuccessor(Handle* succ);//设置后继	
	Handle* GetSuccessor();//得到后继
	std::string getHandleName();//得到处理者名字
	int getHandleLevel();//得到处理级别
protected:
	Handle(string handleName,int handleLevel,Handle* succ);
	Handle(string handleName,int handleLevel);
private:
	Handle* _succ;
	int _handleLevel;
	string _handleName;
};

//假设有两类处理问题的人员。每类有很多个成员
class ConcreteHandleA:public Handle
{
public:
	ConcreteHandleA(string handleName,int handleLevel,Handle* succ);
	ConcreteHandleA(string handleName,int handleLevel);
	~ConcreteHandleA();
	void HandleRequest(Request* request);
protected:
private:
};

class ConcreteHandleB:public Handle
{
public:
	ConcreteHandleB(string handleName,int handleLevel,Handle* succ);
	ConcreteHandleB(string handleName,int handleLevel);
	~ConcreteHandleB();
	void HandleRequest(Request* request);
protected:
private:
};
#endif // !defined(AFX_HANDLE_H__E2BC965A_4449_4A35_BDE5_C4BAF190EA02__INCLUDED_)
