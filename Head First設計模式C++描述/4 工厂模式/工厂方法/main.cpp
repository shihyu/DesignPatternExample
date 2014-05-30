//工厂方法模式定义了一个创建对象的接口，但由子类决定要实例化的类是哪一个。
//工厂方法让类把实例化推迟到子类。
//设计原则：要依赖抽象，不要依赖具体类
#include <iostream>
#include "nypizzastore.h"
#include "chicagopizzastore.h"

using namespace std;

//测试
int main()
{
	//建立两个不同的店
	NYPizzaStore nyStore;
	ChicagoPizzaStore chicagoStore;

	Pizza *pizza = nyStore.orderPizza("cheese");
	cout << "Ethan ordered a " << pizza->getName() << "\n" << endl;
	delete pizza;

	pizza = chicagoStore.orderPizza("cheese");
	cout << "Joel ordered a " << pizza->getName() << "\n" << endl;
	delete pizza;

	return 0;
}