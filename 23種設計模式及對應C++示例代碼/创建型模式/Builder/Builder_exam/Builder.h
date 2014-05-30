// Builder.h: interface for the Builder class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUILDER_H__41FB3B98_56DC_4634_851C_F2FA3E93FFA9__INCLUDED_)
#define AFX_BUILDER_H__41FB3B98_56DC_4634_851C_F2FA3E93FFA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Product.h"
#include <string>
using namespace std;

class Builder
{
public:
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPara)=0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;
protected:
	Builder();
private:
};

class ConcreteBuilder:public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
protected:
private:
	Product pt;
};

#endif // !defined(AFX_BUILDER_H__41FB3B98_56DC_4634_851C_F2FA3E93FFA9__INCLUDED_)
