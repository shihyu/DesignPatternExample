// Prototype_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Prototype.h"

int main(int argc, char* argv[])
{
	/*以下区块为一个测试，测试不用原型模式克隆对象，直接生成对象赋值，
	个人感觉和原型方法区别不是很大。唯一的区别需要知道具体类。抽象基类不能实例化，就算基类不是抽象的，
	仅凭基类以及子类的一个实例（不知道具体子类名）想得到一个与子类对象一样的实例是很困难的*/
	/*
	ConcretePrototype cp1(101,"wang",23);
    //ConcretePrototype cp2;
	//cp2=cp1;
    //上两句等效于
  	ConcretePrototype cp2(cp1);
	cp1.setName("zhang");
	cp1.show();	cp2.show();
	//*/
	Prototype* p = new ConcretePrototype(101,"wang",23);
	/*new ConcretePrototype(101,"wang",23); 可以是从其他渠道传递过来的
	也就是说，我们无需知道具体的类，只有拥有他的抽象接口，和一个具体的实例对象，
	我们就可以得到一个与其同样的对象，加以应用。这样，无论在系统运行时需要操作那个具体类，
	都可以动态制定
	*/
	Prototype* p1 = p->Clone();
	p->show(); p1->show();
	p->setName("li");
    p->show(); p1->show();
	printf("Hello World!\n");
	return 0;
}

