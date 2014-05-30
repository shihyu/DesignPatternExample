// Proxy_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Proxy.h"
int main(int argc, char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();
	//printf("Hello World!\n");
	return 0;
}

