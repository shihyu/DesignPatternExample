// Singleton.h: interface for the Singleton class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SINGLETON_H__EF79C9A7_29AC_413A_A66A_9E9EE3689F70__INCLUDED_)
#define AFX_SINGLETON_H__EF79C9A7_29AC_413A_A66A_9E9EE3689F70__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream> 
using namespace std;

class Singleton  
{private:
    static Singleton* _instance;//静态私有的本类指针
	Singleton();//私有的构造方法，也可定义为protected:这样保证此类不能被实例化
public:
	static Singleton* Instance();//静态函数，可以被类调用
	virtual ~Singleton();
};
Singleton* Singleton::_instance=NULL;
#endif // !defined(AFX_SINGLETON_H__EF79C9A7_29AC_413A_A66A_9E9EE3689F70__INCLUDED_)
