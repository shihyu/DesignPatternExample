// Bridge_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"
#include "Bridge.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	/*Bridge 采用单态模式，里面所以方法都为静态方法。这样无论是否生成Bridge 类对象指针。都可以使用
    Bridge* bridge  = Bridge::getBridge();
    bridge->setActionImp(new ConcreteAbstractionImpA());
     Abstraction* action = new RefinedAbstraction();
	action->Operation();*/
	//设置一个新的活动
    Abstraction* action = new RefinedAbstraction();
	//不设置方案则采用默认方案
	action->Operation();
	//通过桥设置方案
	Bridge::setActionImp(new ConcreteAbstractionImpA());
    action->Operation();
	printf("Hello World!\n");
	return 0;
}

