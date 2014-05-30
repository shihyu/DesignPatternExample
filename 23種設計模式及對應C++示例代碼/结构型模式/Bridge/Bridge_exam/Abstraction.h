// Abstraction.h: interface for the Abstraction class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ABSTRACTION_H__6CB8BB19_B327_40B0_AAE5_75F1533920C2__INCLUDED_)
#define AFX_ABSTRACTION_H__6CB8BB19_B327_40B0_AAE5_75F1533920C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "string"
#include "AbstractionImp.h"
#include "Bridge.h"
#include <iostream>
using namespace std;

class AbstractionImp;

//活动 比如游玩、学习等
class Abstraction
{
public:
	virtual ~Abstraction(){}
	virtual void Operation()=0;	
protected:
	Abstraction(){}	
private:
};

/*一个具体的活动.
 注意此活动的实现需要借助于一个具体的方案（比如有m种可选方案）作为构造参数。具体方案的实施并不在这里。
 这样做的好处是一旦产生一个新的活动，我们只需要些一个类，而不是m个。
*/
class RefinedAbstraction:public Abstraction
{
public:
	//构造函数
	/*根据需要，可以在此通过Bridge 获得 AbstractionImp 实例指针_imp。
		*/
	RefinedAbstraction(){}
	~RefinedAbstraction(){}
	//方案的实施调用
	void Operation()
	{
        _imp=Bridge::getActionImp();
		cout<<"活动一采用";
		_imp->Operation();
	}
protected:
private:
	Bridge* bridge;
	AbstractionImp* _imp;
};

#endif // !defined(AFX_ABSTRACTION_H__6CB8BB19_B327_40B0_AAE5_75F1533920C2__INCLUDED_)
