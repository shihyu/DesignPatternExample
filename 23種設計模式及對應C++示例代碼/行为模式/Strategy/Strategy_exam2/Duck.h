// Duck.h: interface for the Duck class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DUCK_H__EC355C43_B3B0_4EC5_9023_55C196C2C438__INCLUDED_)
#define AFX_DUCK_H__EC355C43_B3B0_4EC5_9023_55C196C2C438__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Fly.h"
#include "Quack.h"
#include "iostream"
using namespace std;
//设置鸭子抽象类
class Duck
{
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	//假设鸭子都会游泳
	void swim()
	{
		cout<<"我会游泳，我游得很棒，";
	}
	//各种外观不一样，所以为抽象
	virtual void display()=0;
	
	void performQuack()
	{
		quackBehavior->quack();
	}
	void performFly()
	{
		flyBehavior->fly();
	}

	void setFlyBehavior(FlyBehavior* flyBehavior)
	{
		this->flyBehavior = flyBehavior;
	}

	void setQuackBehavior(QuackBehavior* quackBehavior)
	{
		this->quackBehavior = quackBehavior;
	}
   
};

/*可以随意生成新鸭子，鸭子都会游泳的，至于飞和叫是独立可设置的。也就是说鸭子的行为已经独立于鸭子
  我们可以随意的增加或修改飞行、叫的种类和模式，造成的影响很有限*/
//一个鸭子实例
class ModelDuck:public Duck
{
public:
	ModelDuck()
	{
		flyBehavior = new FlyNoWay();//初始状态， 我们的模型鸭是不会飞的。
        quackBehavior = new Quack();//初始状态，我们的模型鸭是可以叫的.
	}
	void display()
	{
		cout<<"我是一个模型鸭子，";
	}
};

//根据需要可以建立一个新的FlyBehavior类型

class FlyRocketPowered:public FlyBehavior
{
	// 我们建立一个利用火箭动力的飞行行为。
public:
	void fly()
	{
      cout<<"我已火箭为动力飞行，好畅快，好爽！！！"<<endl;
    }
};




#endif // !defined(AFX_DUCK_H__EC355C43_B3B0_4EC5_9023_55C196C2C438__INCLUDED_)
