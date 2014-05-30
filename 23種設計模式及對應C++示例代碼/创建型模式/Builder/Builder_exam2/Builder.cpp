// Builder.cpp: implementation of the Builder class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Builder.h"
#include "iostream"
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


HumanBuilder::HumanBuilder()
{
	//person=new Person();
}

HumanBuilder::~HumanBuilder()
{

}

void HumanBuilder::buildBody()
{
	cout<<"创建 人类 身体！"<<endl;
	person.setBody("人类");
}
void HumanBuilder::buildFoot()
{
	cout<<"创建 人类 脚！"<<endl;
	person.setFoot("人类");
}
void HumanBuilder::buildHead()
{
	cout<<"创建人类 头！"<<endl;
	person.setHead("人类");
}
Person HumanBuilder::buildPerson()
{
	return person;
} 


TransformerBuilder::TransformerBuilder()
{
	//person=newPerson();
}

void TransformerBuilder::buildBody()
{
	cout<<"创建 变形金刚 身体！"<<endl;
	person.setBody("变形金刚");
}
void TransformerBuilder::buildFoot()
{
	cout<<"创建 变形金刚 脚！"<<endl;
	person.setFoot("变形金刚");
}
void TransformerBuilder::buildHead()
{
	cout<<"创建 变形金刚 头！"<<endl;
	person.setHead("变形金刚");
}
Person TransformerBuilder::buildPerson()
{
	return person;
}
TransformerBuilder::~TransformerBuilder()
{

}