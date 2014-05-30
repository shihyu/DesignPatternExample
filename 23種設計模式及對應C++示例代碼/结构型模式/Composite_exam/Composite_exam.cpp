// Composite_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Component.h" 
#include "Composite.h" 
#include "Leaf.h" 
#include <iostream> 
using namespace std;
int main(int argc, char* argv[])
{
	Composite* com=new Composite();
	com->Add(new LeafA());
	com->Add(new LeafB());
	com->Operation();
	Component* ll = com->GetChild(0);
	ll->Operation();
	//printf("Hello World!\n");
	return 0;
}

