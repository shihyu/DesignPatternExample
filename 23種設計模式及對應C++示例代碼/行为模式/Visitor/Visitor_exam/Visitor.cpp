// Visitor.cpp: implementation of the Visitor class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Visitor.h"
#include "Element.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
	cout<<"A行为中专为A元素写的方法"<<endl;
}

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
	cout<<"A行为中专为B元素写的方法"<<endl;
}

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
	cout<<"B行为中专为A元素写的方法"<<endl;
}
void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
	cout<<"B行为中专为B元素写的方法"<<endl;
}
