// Iterator.h: interface for the Iterator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ITERATOR_H__6B38CCAD_9B74_4C1A_9D99_DF8AC0E769D0__INCLUDED_)
#define AFX_ITERATOR_H__6B38CCAD_9B74_4C1A_9D99_DF8AC0E769D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Aggregate;
typedef int Object;

class Iterator
{
public:
	virtual ~Iterator();
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Object CurrentItem() = 0;
protected:
	Iterator();
private:
};

class ConcreteIterator:public Iterator
{
public:
	ConcreteIterator(Aggregate* ag , int idx = 0);
	~ConcreteIterator();
	void First();//当前序号置零
	void Next();//当前序号+1
	bool IsDone();//是否到表尾
	Object CurrentItem();//解析并返回当前值
protected:
private:
	Aggregate* _ag;
	int _idx;
};

#endif // !defined(AFX_ITERATOR_H__6B38CCAD_9B74_4C1A_9D99_DF8AC0E769D0__INCLUDED_)
