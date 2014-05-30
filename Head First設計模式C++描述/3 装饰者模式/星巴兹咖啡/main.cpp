//装饰者模式：动态的将责任附加到对象上。若要扩展功能，装饰者提供了比继承更有弹性的替代方案

//OO原则：对扩展开放，对修改关闭

#include <iostream>
#include "beverage.h"
#include "condimentdecorator.h"
#include "Espresso.h"
#include "houseblend.h"
#include "mocha.h"

using namespace std;

int main()
{
	Beverage* beverage = new Espresso;   //订一杯无调料的Espresso
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	//本例没有建立DarkRoast类

	Beverage* beverage3 = new HouseBlend;
	beverage3 = new Mocha(beverage3);   //用Mocha装饰
	beverage3 = new Mocha(beverage3);   //用第二个Mocha装饰
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl; 

	delete beverage3;
	delete beverage;

	return 0;
}