// Mediator_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mediator.h"
#include "Colleage.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	ConcreteMediator* m = new ConcreteMediator();//中介对象
	ConcreteColleageA* c1 = new ConcreteColleageA(m);//生成同事一
	ConcreteColleageB* c2 = new ConcreteColleageB(m);//生成同事二
	m->IntroColleage(c1,c2);//需要通信的同事设置入中介，我想如果很多可以用列表吧

	c1->SetState("111111111111"); //同事一设置信息
    //cout<<"同事一当前值："<<c1->GetState()<<endl;//读出同事一的信息
    c1->Aciton();/*同事一的活动,在中介中为每个同事都写一个专门的活动，
	                 当然如果某同事活动种类很多，可以为他写很多个，供其开关调用*/
	cout<<"同事二当前值:"<<c2->GetState()<<endl;/*活动一已经通过中介将信息传递给同事二,读出同事二的值*/


	c2->SetState("22222222");/*/同事二收到信息，做出反应设置自己的信息*/
	//cout<<"同事二当前值："<<c2->GetState();//读出同事二的信息
    c2->Aciton();

	//printf("Hello World!\n");*/
	return 0;
}

