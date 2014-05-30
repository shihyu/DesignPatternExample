// Request.h: interface for the Request class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REQUEST_H__EC8AD70C_D5B6_45FA_93E3_B86C68387F40__INCLUDED_)
#define AFX_REQUEST_H__EC8AD70C_D5B6_45FA_93E3_B86C68387F40__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iostream"
#include "string"
using namespace std;

class Handle;
class ConcreteHandleA;
class ConcreteHandleB;

class Request  
{
public:
	Request();
	virtual ~Request();
	void setRequestLeverl(int requestLeverl);
	int getRequestLeverl();
    void setRequestName(string requestName);
	string getRequestName();
private:
	int requestLeverl;
	string requestName;
};


class HandleChain
{
public:
	HandleChain();	
	~HandleChain(){}
    void setRequest(Request* Request);
private:
	Handle* FirstHandle;
};
#endif // !defined(AFX_REQUEST_H__EC8AD70C_D5B6_45FA_93E3_B86C68387F40__INCLUDED_)
