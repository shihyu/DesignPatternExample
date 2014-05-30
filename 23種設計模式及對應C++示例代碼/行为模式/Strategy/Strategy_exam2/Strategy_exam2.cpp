// Strategy_exam2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Duck.h"
#include "Fly.h"
#include "Quack.h"

int main(int argc, char* argv[])
{
	//生成一个新模型鸭子
    Duck* duck= new ModelDuck();
    duck->display();duck->performQuack();duck->performFly();
	//模型鸭子换动力，只需设置一个飞行动力类（如果没有），并且其他鸭子类可以使用
	duck->setFlyBehavior(new FlyRocketPowered());
	duck->display();duck->performQuack();duck->performFly();
	//printf("Hello World!\n");
	return 0;
}

