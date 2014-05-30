// Builder.h: interface for the Builder class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUILDER_H__D41BB205_9AC4_4B3E_9DC0_68676B14EFE8__INCLUDED_)
#define AFX_BUILDER_H__D41BB205_9AC4_4B3E_9DC0_68676B14EFE8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Person.h"

class PersonBuilder
{
public:
	virtual void buildHead()=0;
	virtual void buildBody()=0;
	virtual void buildFoot()=0;
	virtual Person buildPerson()=0;
};
 
//Builder实现:人类 
class HumanBuilder:public PersonBuilder  
{
public:
	HumanBuilder();
	void buildBody();	
	void buildFoot();	
	void buildHead();	
	Person buildPerson();	
	virtual ~HumanBuilder();
private:
	Person person;
};

//Builder实现:变形金刚 　
class TransformerBuilder:public PersonBuilder
{
private:
	Person person;
public:
	TransformerBuilder();
	void buildBody();	
	void buildFoot();	
	void buildHead();
	Person buildPerson();
	~TransformerBuilder();
};

#endif // !defined(AFX_BUILDER_H__D41BB205_9AC4_4B3E_9DC0_68676B14EFE8__INCLUDED_)
