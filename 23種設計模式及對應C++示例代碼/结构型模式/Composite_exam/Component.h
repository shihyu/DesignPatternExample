// Component.h: interface for the Component class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPONENT_H__EC50F970_2B8C_404C_82A1_06BF7AFEDD54__INCLUDED_)
#define AFX_COMPONENT_H__EC50F970_2B8C_404C_82A1_06BF7AFEDD54__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Component
{
public: 
	Component(){}
	virtual ~Component(){}
public:
	virtual void Operation() = 0;
protected:
private:
};

#endif // !defined(AFX_COMPONENT_H__EC50F970_2B8C_404C_82A1_06BF7AFEDD54__INCLUDED_)
