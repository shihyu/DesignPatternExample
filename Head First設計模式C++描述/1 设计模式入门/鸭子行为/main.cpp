//策略模式：定义算法族，分别封装起来，让它们之间可以互相替换，此模式让算法的变化独立于使用算法的客户。

//OO原则：封装变化；多用组合，少用继承；针对接口编程，不针对实现编程

#include "mallardduck.h"

//测试
int main()
{
	Duck *mallard = new MallardDuck;

	mallard->performQuack();
	mallard->performFly();

	return 0;
}