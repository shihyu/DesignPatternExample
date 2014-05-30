#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//抽象产品类
class Pizza
{
protected:
	string name;
	string dough;
	string sauce;
	vector<string> toppings;
public:
	Pizza(void);
	~Pizza(void);

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual string& getName();
};
