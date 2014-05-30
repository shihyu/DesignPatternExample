// Decorator_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Decorator.h"
int main(int argc, char* argv[])
{
	//一个公共接口
	Component* com;
	//指向原始操作
	com= new ConcreteComponent();
	com->Operation();
	//指向A装饰划线重新打印
	cout<<"--------------------------------------"<<endl;
	com = new DecoratorA(com);
	com->Operation();
	//指向B装饰划线重新打印
	cout<<"--------------------------------------"<<endl;
	com = new DecoratorB(com);
	com->Operation();
	return 0;
}

