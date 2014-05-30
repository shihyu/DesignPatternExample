// PersonDirector.cpp: implementation of the PersonDirector class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "PersonDirector.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

PersonDirector::PersonDirector()
{

}

PersonDirector::~PersonDirector()
{

}

Person PersonDirector::constructPerson(PersonBuilder* pb)
{
	pb->buildHead();
	pb->buildBody();
	pb->buildFoot();
	return pb->buildPerson();
}
