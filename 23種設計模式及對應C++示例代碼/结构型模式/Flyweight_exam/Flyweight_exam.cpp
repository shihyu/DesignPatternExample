// Flyweight_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"

int main(int argc, char* argv[])
{
	FlyweightFactory* fc = new FlyweightFactory();
	Flyweight* fw1 = fc->GetFlyweight("hello");
	Flyweight* fw2 = fc->GetFlyweight("world!");
	Flyweight* fw3 = fc->GetFlyweight("hello");
	//printf("Hello World!\n");
	return 0;
}

