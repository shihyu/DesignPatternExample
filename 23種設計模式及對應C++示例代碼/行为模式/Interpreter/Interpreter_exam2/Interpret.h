// Interpret.h: interface for the Interpret class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INTERPRET_H__1DC3A07D_3032_4C33_A109_9CC7E95E6B9E__INCLUDED_)
#define AFX_INTERPRET_H__1DC3A07D_3032_4C33_A109_9CC7E95E6B9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Context.h"
#include <string>
using namespace std;

class AbstractExpression
{
public:
	virtual ~AbstractExpression();
	virtual void Interpret(const Context& c);
protected:
	AbstractExpression();
private:
};

class TerminalExpression:public AbstractExpression
{
public:
	TerminalExpression(const string& statement);
	~ TerminalExpression();
	void Interpret(const Context& c);
protected:
private: string _statement;
};

class NonterminalExpression:public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression* expression,int times);
	~ NonterminalExpression();
	void Interpret(const Context& c);
protected:
private:
	AbstractExpression* _expression;
	int _times;
};

#endif // !defined(AFX_INTERPRET_H__1DC3A07D_3032_4C33_A109_9CC7E95E6B9E__INCLUDED_)
