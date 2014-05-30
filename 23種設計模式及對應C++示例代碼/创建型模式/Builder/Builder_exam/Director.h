// Director.h: interface for the Director class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DIRECTOR_H__5091B4F4_5515_406C_96EA_F1D9633427C1__INCLUDED_)
#define AFX_DIRECTOR_H__5091B4F4_5515_406C_96EA_F1D9633427C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Product.h"

class Builder;
class Director
{
public:
	Director(Builder* bld);
	~Director();
	Product* Construct();
protected:
private:
	Builder* _bld;
};

#endif // !defined(AFX_DIRECTOR_H__5091B4F4_5515_406C_96EA_F1D9633427C1__INCLUDED_)
