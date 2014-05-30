// Context.h: interface for the Context class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTEXT_H__DC8B1339_711D_49DC_9721_214C1D99F8C3__INCLUDED_)
#define AFX_CONTEXT_H__DC8B1339_711D_49DC_9721_214C1D99F8C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "string"
#include <map>
using namespace std;

class VariableExp;

class Context  
{
public:
	typedef std::pair<std::string, bool> str_bool;
	Context();
	virtual ~Context();
	bool Lookup(const char* name) const;
	//形成变量内部名称和值的映射
	void Assign(VariableExp* ve, bool b);
private:
	std::map<std::string, bool> m_varMap;
};
#endif // !defined(AFX_CONTEXT_H__DC8B1339_711D_49DC_9721_214C1D99F8C3__INCLUDED_)
