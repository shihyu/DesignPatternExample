// FlyweightFactory.h: interface for the FlyweightFactory class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FLYWEIGHTFACTORY_H__5F40637B_1B63_43B2_A8FC_A4539A175FBF__INCLUDED_)
#define AFX_FLYWEIGHTFACTORY_H__5F40637B_1B63_43B2_A8FC_A4539A175FBF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Flyweight.h"
#include <iostream>
//#include <cassert>
#include <string>
#include <vector>
using namespace std;

/*cassert 为原c语言 cassert头文件，
编写代码时，我们总是会做出一些假设，断言就是用于在代码中捕捉这些假设，
可以将断言看作是异常处理的一种高级形式。断言表示为一些布尔表达式，
程序员相信在程序中的某个特定点该表达式值为真。可以在任何时候启用和禁用断言验证，
因此可以在测试时启用断言，而在部署时禁用断言。同样，程序投入运行后，
最终用户在遇到问题时可以重新起用断言。
*/

class FlyweightFactory
{
public:
	FlyweightFactory(){}
	~FlyweightFactory(){}
	Flyweight* GetFlyweight(const string& key)
	{
		vector<Flyweight*>::iterator it = _fly.begin();
		for (; it != _fly.end();it++)
		{ //找到了，就一起用，^_^
			if ((*it)->GetIntrinsicState() == key)
			{
				cout<<"在库中检索到"<<key<<"元素"<<endl;
				return *it;
			}
		}
		//没有找到则创建
		Flyweight* fn = new ConcreteFlyweight(key);
		//放入库中
		_fly.push_back(fn);
		return fn;
	}
protected:
private:
	vector<Flyweight*> _fly;
};

#endif // !defined(AFX_FLYWEIGHTFACTORY_H__5F40637B_1B63_43B2_A8FC_A4539A175FBF__INCLUDED_)
