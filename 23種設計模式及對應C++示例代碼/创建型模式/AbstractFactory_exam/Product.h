#include <iostream>
using namespace std;

class AbstractProductA
{
public:
	virtual ~AbstractProductA();
	virtual void fun()=0;
protected:
	AbstractProductA();
private:
};


class AbstractProductB
{
public: 
	virtual ~AbstractProductB();
	virtual void fun()=0;
protected:
	AbstractProductB();
private:
};

class ProductA1:public AbstractProductA
{
public: 
	ProductA1();
	void fun();
	~ProductA1();
protected:
private:
};

class ProductA2:public AbstractProductA
{
public: 
	ProductA2();
	void fun();
	~ProductA2();
protected:
private:
};

class ProductB1:public AbstractProductB
{
public:
	ProductB1();
	void fun();
	~ProductB1();
protected:
private:
};

class ProductB2:public AbstractProductB
{
public:
	ProductB2();
	void fun();
	~ProductB2();
protected:
private:
};