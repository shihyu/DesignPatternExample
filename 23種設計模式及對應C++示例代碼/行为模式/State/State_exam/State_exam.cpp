// State_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	State* st = new ConcreteStateA();
	Context* con = new Context(st);
    
	con->OperationChangStateLarge();
	con->OperationChangStateLarge();
	con->OperationChangStateLarge();
	
	return 0;
}

