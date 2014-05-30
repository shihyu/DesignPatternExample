// Proxy.h: interface for the Proxy class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROXY_H__A8B048E8_CF56_44B6_B1A2_0E344A7485F9__INCLUDED_)
#define AFX_PROXY_H__A8B048E8_CF56_44B6_B1A2_0E344A7485F9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;

class Subject
{
public:
	virtual ~Subject(){}
	virtual void Request() = 0;
protected:
	Subject(){}
private:
};

class ConcreteSubject:public Subject
{
public:
	ConcreteSubject(){}
	~ConcreteSubject(){}
	void Request()
	{
		cout<<"ConcreteSubject......request ...."<<endl;
	}
protected:
private:
};

class Proxy
{
public:
	Proxy(){}
	Proxy(Subject* sub)
	{
		_sub = sub;
	}
	~Proxy()
	{
		delete _sub;
	}
	void Request()
	{
		cout<<"Proxy request...."<<endl;
		_sub->Request();
	}
protected:
private:
	Subject* _sub;
};

#endif // !defined(AFX_PROXY_H__A8B048E8_CF56_44B6_B1A2_0E344A7485F9__INCLUDED_)
