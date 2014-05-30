// PersonDirector.h: interface for the PersonDirector class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSONDIRECTOR_H__A99DBB1E_4B2F_4DA5_944F_4E49B76E3387__INCLUDED_)
#define AFX_PERSONDIRECTOR_H__A99DBB1E_4B2F_4DA5_944F_4E49B76E3387__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Person.h"
#include "Builder.h"

//Director构建向导
class PersonDirector  
{
public:
	PersonDirector();
	virtual ~PersonDirector();
	Person constructPerson(PersonBuilder* pb);
};

#endif // !defined(AFX_PERSONDIRECTOR_H__A99DBB1E_4B2F_4DA5_944F_4E49B76E3387__INCLUDED_)
