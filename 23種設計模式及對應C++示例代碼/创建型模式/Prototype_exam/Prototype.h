// Prototype.h: interface for the Prototype class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROTOTYPE_H__A8573C55_2343_42F2_AFD1_8F22AE749C6F__INCLUDED_)
#define AFX_PROTOTYPE_H__A8573C55_2343_42F2_AFD1_8F22AE749C6F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "string"
#include "iostream"
using namespace std;

class Prototype
{
public:
	virtual ~Prototype(){}
	virtual Prototype* Clone()const=0;
	virtual void show()=0;
	void setId(int id){this->id=id;}
	void setName(string name){this->name=name;}
	void setAge(int age){this->age=age;}
	int getId(){return id;}
	string getName(){return name;}
	int getAge(){return age;}
protected:
	//构造函数，为快速构造对象而设
	Prototype(int id1,string name1,int age1):id(id1),name(name1),age(age1){}
	Prototype(){}
	int id;
	string name;
	int age;
};


class ConcretePrototype:public Prototype
{
public:
	//一个空构造函数
	ConcretePrototype(){}
	//构造函数，为快速构造对象而设
	ConcretePrototype(int id1,string name1,int age1):Prototype(id1,name1,age1){}
	~ConcretePrototype(){}
	Prototype* Clone() const;	

	void show()
	{
		cout<<"id:"<<id<<",name:"<<name<<",age:"<<age<<endl;
	}
protected:
private:

};

#endif // !defined(AFX_PROTOTYPE_H__A8573C55_2343_42F2_AFD1_8F22AE749C6F__INCLUDED_)
