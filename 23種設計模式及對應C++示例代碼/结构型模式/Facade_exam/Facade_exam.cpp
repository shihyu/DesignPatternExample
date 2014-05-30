// Facade_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Facade.h"

int main(int argc, char* argv[])
{
	Facade* f = new Facade();
	f->OperationWrapper();
	printf("Hello World!\n");
	return 0;
}

