// Factory_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Factory* fac = new ConcreteFactory1();
	Product* p = fac->CreateProduct();
	printf("Hello World!\n");
	return 0;
}

