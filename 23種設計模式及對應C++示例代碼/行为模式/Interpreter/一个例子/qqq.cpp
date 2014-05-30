// qqq.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <map>
#include <string>
//#include <utility>
using namespace std; 

class VariableExp;

class Context
{
public:
	typedef std::pair<std::string, bool> str_bool;
	
	bool Lookup(const char* name) const
	{
		return m_varMap.find(name)->second;
	}	
	//形成变量内部名称和值的映射
	void Assign(VariableExp* ve, bool b);
private:
	std::map<std::string, bool> m_varMap;
};

class BooleanExp
{
public:
	BooleanExp(){}
	virtual ~BooleanExp(){}
	virtual bool Evaluate(Context&)=0;
	virtual BooleanExp* Replace(const char*, BooleanExp&)=0;
	virtual BooleanExp* Copy() const = 0;
protected:
private:
};
 
//定义一个变量对象（终端解析式），并指定他的内部名称
class VariableExp:public BooleanExp
{
public:
	VariableExp(const char* name)
	{
		m_name = strdup(name);
	}
	//按内部名称在 解析器中查值
	bool Evaluate(Context& aContext)
	{
		return aContext.Lookup(m_name);
	}
	//生成一个变量对象，其内部名称与此对象相同
	virtual BooleanExp* Copy() const
	{
		return new VariableExp(m_name);
	}
	virtual BooleanExp* Replace(const char* name, BooleanExp& exp)
	{
		if(strcmp(name, m_name)==0)
		{
			return exp.Copy();
		}else{
			return new VariableExp(m_name);
		}
	}
	char* m_name;
};

class AndExp : public BooleanExp
{
public:
	AndExp(BooleanExp* op1, BooleanExp* op2)
	{
		m_operand1 = op1;
		m_operand2 = op2;
	}
	virtual ~AndExp(){}
	bool Evaluate(Context& aContext)
	{
		return m_operand1->Evaluate(aContext) && m_operand2->Evaluate(aContext);
	}
	virtual BooleanExp* Copy() const
	{
		return new AndExp(m_operand1->Copy(), m_operand2->Copy());
	}
	virtual BooleanExp* Replace(const char* name, BooleanExp& exp)
	{
		return new AndExp(m_operand1->Replace(name, exp),
			m_operand2->Replace(name, exp));
	}
private:
	BooleanExp* m_operand1;
	BooleanExp* m_operand2;
};

class OrExp : public BooleanExp
{
public:
	OrExp(BooleanExp* op1, BooleanExp* op2)
	{
		m_operand1 = op1;
		m_operand2 = op2;
	}
	virtual ~OrExp(){}
	bool Evaluate(Context& aContext)
	{
		return m_operand1->Evaluate(aContext) || m_operand2->Evaluate(aContext);
	}
	virtual BooleanExp* Copy() const
	{
		return new OrExp(m_operand1->Copy(), m_operand2->Copy());
	}
	virtual BooleanExp* Replace(const char* name, BooleanExp& exp)
	{
		return new OrExp(m_operand1->Replace(name, exp),
			m_operand2->Replace(name, exp));
	}
private:
	BooleanExp* m_operand1;
	BooleanExp* m_operand2;
};

class NotExp : public BooleanExp
{
public:
	NotExp(BooleanExp* op)
	{
		m_operand = op;
	}
	virtual ~NotExp(){}
	bool Evaluate(Context& aContext)
	{
		return !m_operand->Evaluate(aContext);
	}
	virtual BooleanExp* Copy() const
	{
		return new NotExp(m_operand->Copy());
	}
	virtual BooleanExp* Replace(const char* name, BooleanExp& exp)
	{
		return new NotExp(m_operand->Replace(name, exp));
	}
private:
	BooleanExp* m_operand;
};


class Constant : public BooleanExp
{
public:
	Constant(bool b)
	{
		m_bConstant = b;
	}
	virtual ~Constant(){}
	bool Evaluate(Context& aContext)
	{
		return m_bConstant;
	}
	virtual BooleanExp* Copy() const
	{
		return new Constant(m_bConstant);
	}
	virtual BooleanExp* Replace(const char* name, BooleanExp& exp)
	{
		return 0;
	}
private:
	bool m_bConstant;
};

 

//(true and x) or (y and (not x)) 

int main()
{
	BooleanExp* expression,*expression2;
	Context context;
	VariableExp* x = new VariableExp("X");
	VariableExp* y = new VariableExp("Y");
	expression = new OrExp(
		new AndExp(new Constant(true), x),
		new AndExp(y, new NotExp(x)));
	context.Assign(x, false);
	context.Assign(y, true);
	bool result = expression->Evaluate(context);
	cout<<"result: "<<result<<endl;
}


void Context::Assign(VariableExp* ve,bool b)
{
	m_varMap.insert(str_bool(ve->m_name, b));
}

