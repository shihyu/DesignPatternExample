#pragma once

#include <string>

using namespace std;

//装饰者和被装饰对象的共同基类
class Beverage
{
protected:
	string description; 
public:
	Beverage(void);

	virtual string getDescription();
	virtual double cost() = 0;   //必须在子类中实现

	~Beverage(void);
};
