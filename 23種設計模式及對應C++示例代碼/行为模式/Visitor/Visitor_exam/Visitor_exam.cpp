// Visitor_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Element.h"
#include "Visitor.h"


int main(int argc, char* argv[])
{
	Visitor* visA = new ConcreteVisitorA();//生成一个行为对象
	Visitor* visB = new ConcreteVisitorB();//生成一个行为对象
	Element* elmA = new ConcreteElementA();//生成一个元素
	Element* elmB = new ConcreteElementB();//生成一个元素
	cout<<endl;
	elmA->Accept(visA);//元素调用方法
	elmA->Accept(visB);//元素调用方法
	elmB->Accept(visA);//元素调用方法
	elmB->Accept(visB);//元素调用方法
	return 0;
}

