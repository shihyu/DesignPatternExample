// Element.cpp: implementation of the Element class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Element.h"
#include "Visitor.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


void ConcreteElementA::Accept(Visitor* vis)
{
	cout<<"即将调用元素A的方法，";
	vis->VisitConcreteElementA(this);	
}
void ConcreteElementB::Accept(Visitor* vis)
{
	cout<<"即将调用元素B的方法，";
	vis->VisitConcreteElementB(this);
}
