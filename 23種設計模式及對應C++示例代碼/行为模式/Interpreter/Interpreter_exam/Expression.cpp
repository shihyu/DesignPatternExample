// Expression.cpp: implementation of the Expression class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Expression.h"
#include "string"
#include "Context.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
//终端表达式（常数）
ConstantExp::ConstantExp(bool b)
{
	m_bConstant = b;
}
     //常数直接返回值
bool ConstantExp::Interpret(Context& aContext)
{
	return m_bConstant;
}

//定义一个变量对象（终端解析式），并指定他的内部名称
VariableExp::VariableExp(const char* name)
{
	m_name = strdup(name);
}
     //按内部名称在 解析器中查值
bool VariableExp::Interpret(Context& aContext)
{
	return aContext.Lookup(m_name);
}

//非终端表达式： 与运算
AndExp::AndExp(AbstractExpression* op1, AbstractExpression* op2)
{
	m_operand1 = op1;
	m_operand2 = op2;
}
   //两个表达式分别计算，结果相与
bool AndExp::Interpret(Context& aContext)
{
	return m_operand1->Interpret(aContext) && m_operand2->Interpret(aContext);
}

//非终端表达式： 或运算
OrExp::OrExp(AbstractExpression* op1, AbstractExpression* op2)
{
	m_operand1 = op1;
	m_operand2 = op2;
}
   //两个表达式分别计算，结果相或
bool OrExp::Interpret(Context& aContext)
{
	return m_operand1->Interpret(aContext) || m_operand2->Interpret(aContext);
}

//非终端表达式： 非运算
NotExp::NotExp(AbstractExpression* op)
{
	this->m_operand = op;
}
   //两个表达式分别计算，结果相非
bool NotExp::Interpret(Context& aContext)
{
	return !m_operand->Interpret(aContext);
}

