// Context.cpp: implementation of the Context class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Context.h"
#include "Expression.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Context::Context(){}
Context::~Context(){}

bool Context::Lookup(const char* name) const
{
	return m_varMap.find(name)->second;
}
//形成变量内部名称和值的映射
void Context::Assign(VariableExp* ve,bool b)
{
	m_varMap.insert(str_bool(ve->m_name, b));
}