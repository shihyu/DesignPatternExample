// Application.h: interface for the Application class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_APPLICATION_H__02FD6DD0_2456_464D_99FD_32B10B0D49F0__INCLUDED_)
#define AFX_APPLICATION_H__02FD6DD0_2456_464D_99FD_32B10B0D49F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "strategy.h"
/*有一个现实的应用类族，这族类里有一些属性、行为是共同的。还有一些行为是可变的。
在这里我们假设有两种行为是可变的，将他们抽出来。
*/
//应用抽象类
class Application  
{
public:
	Application(){}
	virtual ~Application(){}
	//这是所有子类都有的功能
	void CommonMethod()
	{
		cout<<"这是我们都有的一样的功能"<<endl;
	}
	//所有子类都有但不同例如描述信息
	virtual void disply()=0;

	void setBehaviorOne(BehaviorOne* behaviorOne)
	{
		this->behaviorOne= behaviorOne;
	}

	void setBehaviorTwo(BehaviorTwo* behaviorTwo)
	{
		this->behaviorTwo= behaviorTwo;
	}

	void perForm()
	{
		behaviorOne->BehaviorOneMethod();
        behaviorTwo->BehaviorTwoMethod();
	}
protected:
	BehaviorOne* behaviorOne;
	BehaviorTwo* behaviorTwo;
};

//插件式定制具体应用类
class ApplicationOne:public Application
{
public:
	//在构造器里面分别给行为设置默认插件。
	ApplicationOne()
	{
		this->behaviorOne=new BehaviorOneA();
		this->behaviorTwo=new BehaviorTwoA();
	}
	//子类特有的功能
	void disply()
	{
		cout<<"你好，我是具体应用类，这是我的描述信息"<<endl;
	}
};
/*
如果需要生成新的应用类，向上面一样，继承Application 类，并重写描述方法就可以。
两个参数的默认值也可以在 Application 里面设置。但缺少灵活性。
如果不这样，每个子类都去写自己的行为（这里是两个），那么当子类很多而行为用不固定，甚至某种行为
下属还会不断化时。给修改很维护带来很多的麻烦。将每种变化都抽出来，在具体应用类里面预留接口。实行
插件式编程，带来很大的方便
*/

#endif // !defined(AFX_APPLICATION_H__02FD6DD0_2456_464D_99FD_32B10B0D49F0__INCLUDED_)
