// Builder_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include "Product.h"
#include "Director.h"

int main(int argc, char* argv[])
{
	Product* pro;//接收产品的指针
	//将一个具体的构建者付给指挥者
	Director* d = new Director(new ConcreteBuilder());
	pro=d->Construct();//调用产生产品
	pro->fun();
	printf("Hello World!\n");
	return 0;
}

