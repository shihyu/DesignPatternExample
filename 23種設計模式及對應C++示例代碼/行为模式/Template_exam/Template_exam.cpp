// Template_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Template.h"

int main(int argc, char* argv[])
{
	//模板模式，本类族公共方法在抽象类
	//分别生成不同子类对象各一个
	AbstractClass* p1 = new ConcreteClass1();
	AbstractClass* p2 = new ConcreteClass2(); 
	//调用公共方法测试
	cout<<"调用公共方法测试:....."<<endl;
	p1->CommonMethod();p2->CommonMethod();
	cout<<"调用子类方法测试:....."<<endl;
	//p1->PrimitiveOperation1();p2->PrimitiveOperation2();
	p1->TemplateMethod();
	p2->TemplateMethod();
	//printf("Hello World!\n");
	return 0;
}

