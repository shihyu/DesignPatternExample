// Interpreter_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "Expression.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//生成表达式
	AbstractExpression* expression;
	//解析器对象
	Context context;
	//两个变量
	VariableExp* varX = new VariableExp("keyX");
	VariableExp* varY = new VariableExp("keyY");
	/*一个复杂表达式 或（与（常量，变量），与（变量，非（变量）））*/
	expression = new OrExp(
		new AndExp(new ConstantExp(true), varX),
		new AndExp(varY, new NotExp(varX)));
	//在解析器中建立外部名字和值的关联
	context.Assign(varX, false);
	context.Assign(varY, true);
	//递归运算表达式求值
	bool result = expression->Interpret(context);
	cout<<"result: "<<result<<endl;
	printf("Hello World!\n");
	return 0;
}

