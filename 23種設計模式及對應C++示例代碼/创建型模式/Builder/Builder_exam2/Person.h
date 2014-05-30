// Person.h: interface for the Person class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__60D3827D_FDA5_4DE3_B5A3_60E657430D1E__INCLUDED_)
#define AFX_PERSON_H__60D3827D_FDA5_4DE3_B5A3_60E657430D1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
#include <string> 

class Person  
{
private:
	string head;
	string body;
	string foot;
public:
	Person();
	virtual ~Person();
	string getHead(){return "获得"+head+"的头";}
	string getBody(){return "获得"+body+"的身体";}
	string getFoot(){return "获得"+foot+"的脚";} 
	void setHead(string head1){head=head1;}
	void setFoot(string foot1){foot= foot1;}
	void setBody(string body1){body= body1;}
};

#endif // !defined(AFX_PERSON_H__60D3827D_FDA5_4DE3_B5A3_60E657430D1E__INCLUDED_)
