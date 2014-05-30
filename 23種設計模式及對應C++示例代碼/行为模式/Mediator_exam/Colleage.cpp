// Colleage.cpp: implementation of the Colleage class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Colleage.h"
#include "Mediator.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


Colleage::Colleage()
{ //_sdt = " "; 
}
Colleage::Colleage(Mediator* mdt)
{
	this->_mdt = mdt;//_sdt = " ";
}
Colleage::~Colleage(){}

ConcreteColleageA::ConcreteColleageA(){}
ConcreteColleageA::~ConcreteColleageA() {}
ConcreteColleageA::ConcreteColleageA(Mediator* mdt):Colleage(mdt){}
string ConcreteColleageA::GetState(){return _sdt;}
void ConcreteColleageA::SetState(const string& sdt){ _sdt = sdt; }
void ConcreteColleageA::Aciton()
{
	_mdt->DoActionFromAtoB();
	cout<<"同事一当前值为"<<" "<<this->GetState()<<"已经通过中介方法将信息传递给目标对象"<<endl;
}

ConcreteColleageB::ConcreteColleageB() {}
ConcreteColleageB::~ConcreteColleageB() {}
ConcreteColleageB::ConcreteColleageB(Mediator* mdt):Colleage(mdt){}

void ConcreteColleageB::Aciton()
{
	_mdt->DoActionFromBtoA();
	cout<<"同事二当前值为"<<" "<<this->GetState()<<"已经通过中介方法将信息传递给目标对象"<<endl;
}

string ConcreteColleageB::GetState(){ return _sdt; }
void ConcreteColleageB::SetState(const string& sdt){ _sdt = sdt;}
