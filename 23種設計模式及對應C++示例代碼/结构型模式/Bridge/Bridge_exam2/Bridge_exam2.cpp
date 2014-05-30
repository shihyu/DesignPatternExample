// Bridge_exam2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Coffee.h"
#include "CoffeeImp.h"

int main(int argc, char* argv[])
{
	//设置加牛奶
	CoffeeImpSingleton::getCoffeeImpSingleton()->setCoffeeImp(new MilkCoffeeImp());
	//定制中杯、大杯
	MediumCoffee mediumCoffee1;SuperSizeCoffee superSizeCoffee1;
	mediumCoffee1.pourCoffee();superSizeCoffee1.pourCoffee();
    //设置不加牛奶
	CoffeeImpSingleton::getCoffeeImpSingleton()->setCoffeeImp(new FragrantCoffeeImp());
	//定制中杯、大杯
	MediumCoffee mediumCoffee2;SuperSizeCoffee superSizeCoffee2;
	mediumCoffee2.pourCoffee();superSizeCoffee2.pourCoffee();
	return 0;
}

