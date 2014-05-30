//AbstractFactory.cpp
#include "stdafx.h"
#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	AbstractProductA* proA;
	AbstractProductB* proB; 
    
	//生成工厂一对象
	AbstractFactory* cf1 = new ConcreteFactory1();
	//通过工厂一的方法 创建产品对象A
	proA=cf1->CreateProductA();
    //对象A的方法
    proA->fun();
    //(new ProductA1)->fun();

	proB=cf1->CreateProductB();
	proB->fun();

	AbstractFactory* cf2 = new ConcreteFactory2();
	proA=cf2->CreateProductA();
    proA->fun();
	proB=cf2->CreateProductB();
	proB->fun();
	printf("Hello World!\n");
	return 0;
}