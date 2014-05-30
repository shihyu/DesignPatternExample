// Iterator_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Aggregate* ag = new ConcreteAggregate();
	Iterator* it = new ConcreteIterator(ag);
	for (; !(it->IsDone());it->Next())
	{
		cout<<it->CurrentItem()<<endl;
	}
//	printf("Hello World!\n");
	return 0;
}

