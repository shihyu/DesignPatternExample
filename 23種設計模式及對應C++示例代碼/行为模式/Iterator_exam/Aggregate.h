// Aggregate.h: interface for the Aggregate class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_AGGREGATE_H__DC457711_BE60_4FCE_826E_7488FFCFEEAA__INCLUDED_)
#define AFX_AGGREGATE_H__DC457711_BE60_4FCE_826E_7488FFCFEEAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Iterator;
typedef int Object;

class Interator;
class Aggregate
{
public:
	virtual ~Aggregate();
	virtual Iterator* CreateIterator() = 0;
	virtual Object GetItem(int idx) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate();
private:
};

class ConcreteAggregate:public Aggregate
{
public:
	enum{SIZE = 3};
	ConcreteAggregate();//构造集合
	~ConcreteAggregate();
	Iterator* CreateIterator();//创建迭代器
	Object GetItem(int idx);//得到集合中指定序号值
	int GetSize();//得到集合大小
protected:
private:
	Object _objs[SIZE];
};

#endif // !defined(AFX_AGGREGATE_H__DC457711_BE60_4FCE_826E_7488FFCFEEAA__INCLUDED_)
