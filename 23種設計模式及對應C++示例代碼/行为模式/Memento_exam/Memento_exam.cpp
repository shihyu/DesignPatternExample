// Memento_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Memento.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Originator* o = new Originator();
	o->SetState("old"); //备忘前状态
	o->PrintState();//显示当前值	
	Memento* m1 = o->CreateMemento(); //将当前状态备忘
	cout<<endl;

	o->SetState("newA"); //修改状态
	o->PrintState();
	cout<<endl;

	o->SetState("newB"); //修改状态
	o->PrintState();
	cout<<endl;

	o->SetState("newC"); //修改状态
	o->PrintState();
    Memento* m2 = o->CreateMemento(); //将当前状态备忘
	cout<<endl;

	o->RestoreToMemento(m1); //恢复修改前状态
	o->PrintState();
	cout<<endl;

	o->RestoreToMemento(m2); //恢复修改前状态
	o->PrintState();
//	printf("Hello World!\n");
	return 0;
}

