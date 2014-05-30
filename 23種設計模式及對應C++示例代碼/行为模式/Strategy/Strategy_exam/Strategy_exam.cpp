// Strategy_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Strategy.h"
#include "Application.h"

int main(int argc, char* argv[])
{
	//生成一个应用类对象
	Application *app = new ApplicationOne();
	//测试行为
	app->disply();
	app->CommonMethod();
	app->perForm();
    //设置新行为
	app->setBehaviorOne(new BehaviorOneB());
	app->setBehaviorTwo(new BehaviorTwoB());
    app->perForm();
	//printf("Hello World!\n");
	return 0;
}

