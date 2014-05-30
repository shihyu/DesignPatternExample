// Expression.h: interface for the Expression class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXPRESSION_H__C5AE2FFA_1A76_4DFA_A3DE_9EB3F7EC9C33__INCLUDED_)
#define AFX_EXPRESSION_H__C5AE2FFA_1A76_4DFA_A3DE_9EB3F7EC9C33__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Context;

//抽象表达式类
class AbstractExpression  
{
public:
	AbstractExpression(){}
	virtual ~AbstractExpression(){}
	virtual bool Interpret(Context&)=0;
protected:
private:
};

//终端表达式（常数）
class ConstantExp: public AbstractExpression
{
public:
	//构造常数
	ConstantExp(bool b);
	virtual ~ConstantExp(){}
	//常数直接返回值
	bool Interpret(Context& aContext);
private:
	bool m_bConstant;
};

//定义一个变量对象（终端解析式），并指定他的内部名称
class VariableExp:public AbstractExpression
{
public:
	VariableExp(const char* name);
	//按内部名称在 解析器中查值
	bool Interpret(Context& aContext);
	char* m_name;
};

//非终端表达式： 与运算
class AndExp : public AbstractExpression
{
public:
	AndExp(AbstractExpression* op1, AbstractExpression* op2);
	virtual ~AndExp(){}
	bool Interpret(Context& aContext);
private:
	AbstractExpression* m_operand1;
	AbstractExpression* m_operand2;
};
//非终端表达式： 或运算
class OrExp : public AbstractExpression
{
public:
	OrExp(AbstractExpression* op1, AbstractExpression* op2);
	virtual ~OrExp(){}
	bool Interpret(Context& aContext);
private:
	AbstractExpression* m_operand1;
	AbstractExpression* m_operand2;
};
//非终端表达式： 非运算
class NotExp:public AbstractExpression
{
public:
	NotExp(AbstractExpression* op);
	virtual ~NotExp(){}
	bool Interpret(Context& aContext);
private:
	AbstractExpression* m_operand;
};

#endif // !defined(AFX_EXPRESSION_H__C5AE2FFA_1A76_4DFA_A3DE_9EB3F7EC9C33__INCLUDED_)
