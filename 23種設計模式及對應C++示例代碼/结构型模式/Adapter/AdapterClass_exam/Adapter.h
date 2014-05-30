// Adapter.h: interface for the Adapter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADAPTER_H__00B0F5B6_3560_496D_9FEE_F58D1DAD9E1A__INCLUDED_)
#define AFX_ADAPTER_H__00B0F5B6_3560_496D_9FEE_F58D1DAD9E1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;

//模拟原始目标类，通过Request 实现功能。但是我们需要一个附加功能第三方类已经实现，但其名称为SpecificRequest
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
/*模拟第三方类，里面SpecificRequest 是我们需要的。我们期望给用户提供统一接口，都通过Request方法*/
class ThirdParty
{
public:
	ThirdParty(){}
	~ThirdParty(){}
	void SpecificRequest()
	{
		cout<<"我们需要的第三方类方法，方法名称为SpecificRequest" <<endl;
	};
protected:
private:
};

//继承目标类，则其指针可以指向适配器对象，继承第三方类则适配器可以调用第三方类方法
class Adapter:public Target,private ThirdParty
{
public:
	Adapter(){}
	~Adapter(){}
	void Request()
	{
		this->SpecificRequest();
	};
protected:
private:
};

#endif // !defined(AFX_ADAPTER_H__00B0F5B6_3560_496D_9FEE_F58D1DAD9E1A__INCLUDED_)
