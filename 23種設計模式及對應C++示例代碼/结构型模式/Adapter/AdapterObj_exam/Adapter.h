// Adapter.h: interface for the Adapter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADAPTER_H__6B139991_4B8C_4465_A290_7FC49C9E9DAB__INCLUDED_)
#define AFX_ADAPTER_H__6B139991_4B8C_4465_A290_7FC49C9E9DAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
/*模拟原始目标类，通过Request 实现功能。但是我们需要一个附加功
能第三方类已经实现，但其名称为SpecificRequest*/
class Target
{
public:
	Target(){}
	virtual ~Target(){}
	virtual void Request()
	{
		cout<<"我们的目标类方法，方法名称为Request"<<endl;
	};
protected:
private:
};
/*模拟第三方类接口，里面抽象方法SpecificRequest 是我们需要的。他的不同实现可能具有不同功能*/
class ThirdPartyInterface
{
public:
	ThirdPartyInterface(){}
	~ThirdPartyInterface(){}
	virtual void SpecificRequest()=0;
protected:
private:
};
/*模拟第三方类，里面SpecificRequest 是我们需要的。我们期望给用户提供统一接口，都通过Request方法*/
class ThirdPartyOne:public ThirdPartyInterface
{
public:
	ThirdPartyOne(){}
	~ThirdPartyOne(){}
	void SpecificRequest()
	{
		cout<<"我们需要的第三方类方法，方法名称为SpecificRequest" <<endl;
	}
};

//继承目标类，则其指针可以指向适配器对象
class Adapter:public Target
{
public:
	Adapter(ThirdPartyInterface* thirdParty)//:Target(),_thirdParty(thirdParty){}
	{
		this->_thirdParty = thirdParty;
	}
	~Adapter(){}
	void Request()
	{
		_thirdParty->SpecificRequest();
	}
protected:
private:
	ThirdPartyInterface* _thirdParty;
};



#endif // !defined(AFX_ADAPTER_H__6B139991_4B8C_4465_A290_7FC49C9E9DAB__INCLUDED_)
