// AbstractionImp.cpp: implementation of the AbstractionImp class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "AbstractionImp.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


AbstractionImp::AbstractionImp()
{
	
}
AbstractionImp::~AbstractionImp()
{
	
}
void AbstractionImp::Operation(Abstraction* action)
{
	cout<<"AbstractionImp....imp..."<<endl;
}
ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{

}
ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{

}
void ConcreteAbstractionImpA::Operation(Abstraction* action)
{
	cout<<"ConcreteAbstractionImpA...."<<endl;
}
ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{

}
ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
}
void ConcreteAbstractionImpB::Operation(Abstraction* action)
{
	cout<<"ConcreteAbstractionImpB...."<<endl;
}
