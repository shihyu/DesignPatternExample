// Observer_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Subject.h"
#include "Observer.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	ConcreteSubject* sub = new ConcreteSubject();
    Observer* o1 = new ConcreteObserverA(sub);
	Observer* o2 = new ConcreteObserverB(sub);
	cout<<endl<<endl;

	sub->SetState("old");
	sub->Notify();
	cout<<endl<<endl;

	sub->SetState("new"); //也可以由Observer调用
	sub->Notify();
    cout<<endl<<endl;

	sub->Detach(o1);/*从科目对象的观察者列表中删除一个观察者o1->~Observer();//观察者对象将自己从科目列表中删除*/
	sub->Notify();
	//printf("Hello World!\n");
	return 0;
}

