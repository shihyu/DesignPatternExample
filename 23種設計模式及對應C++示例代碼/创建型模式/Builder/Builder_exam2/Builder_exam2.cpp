// Builder_exam2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
#include "PersonDirector.h"

int main(int argc, char* argv[])
{
	PersonDirector pd;
	Person person=pd.constructPerson(new HumanBuilder());
	cout<<person.getBody()<<endl
		<<person.getFoot()<<endl
		<<person.getHead()<<endl;
	Person transformer=pd.constructPerson(new TransformerBuilder());
	cout<<transformer.getBody()<<endl
		<<transformer.getFoot()<<endl
		<<transformer.getHead()<<endl;
	printf("Hello World!\n");
	return 0;
}

