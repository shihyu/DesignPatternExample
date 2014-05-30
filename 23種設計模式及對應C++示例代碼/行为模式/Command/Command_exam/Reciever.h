// Reciever.h: interface for the Reciever class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECIEVER_H__4D6DD7A0_7009_4B55_9824_95515500240C__INCLUDED_)
#define AFX_RECIEVER_H__4D6DD7A0_7009_4B55_9824_95515500240C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
class Reciever
{
public:
	Reciever(){}
	~Reciever(){}
	void Action()
	{
		std::cout<<"处理对象的处理活动"<<std::endl;
	}
protected:
private:
};

#endif // !defined(AFX_RECIEVER_H__4D6DD7A0_7009_4B55_9824_95515500240C__INCLUDED_)
