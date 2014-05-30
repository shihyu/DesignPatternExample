// Interpreter_exam2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "Interpret.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Context* c = new Context();
	AbstractExpression* te = new TerminalExpression("hello");
	AbstractExpression* nte = new NonterminalExpression(te,2);
	nte->Interpret(*c);
	//printf("Hello World!\n");
	return 0;
}

