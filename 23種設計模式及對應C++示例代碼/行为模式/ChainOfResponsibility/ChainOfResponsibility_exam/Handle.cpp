// Handle.cpp: implementation of the Handle class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Handle.h"
#include "Request.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void Handle::SetSuccessor(Handle* succ){_succ = succ; }//设置后继	
Handle* Handle::GetSuccessor(){return _succ;}//得到后继
string Handle::getHandleName(){return _handleName;}//得到处理者名字
int Handle::getHandleLevel(){return _handleLevel;}//得到处理级别
Handle::Handle(string handleName,int handleLevel,Handle* succ)
:_handleName(handleName),_handleLevel(handleLevel),_succ(succ){}
Handle::Handle(string handleName,int handleLevel)
:_handleName(handleName),_handleLevel(handleLevel){}


ConcreteHandleA::ConcreteHandleA(string handleName,int handleLevel,Handle* succ)
    :Handle(handleName,handleLevel,succ){}
ConcreteHandleA::ConcreteHandleA(string handleName,int handleLevel)
    :Handle(handleName,handleLevel){}
ConcreteHandleA::~ConcreteHandleA(){}

void ConcreteHandleA::HandleRequest(Request* request)
{
	if((this->getHandleLevel())==(request->getRequestLeverl()))
	{
		cout<<this->getHandleName()<<"处理问题："<<request->getRequestName()<<endl;
	}else if(this->GetSuccessor() != 0)
	{
		cout<<"我是"<<this->getHandleName()<<",问题("<<request->getRequestName()<<")不归我处理,已经后传"<<endl;
		this->GetSuccessor()->HandleRequest(request);
	}
	else
	{
		cout<<"问题("<<request->getRequestName()<<")没有找到合适的处理者，暂时无法处理，请与管理员联系"<<endl;
	}
}



ConcreteHandleB::ConcreteHandleB(string handleName,int handleLevel,Handle* succ)
    :Handle(handleName,handleLevel,succ){}
ConcreteHandleB::ConcreteHandleB(string handleName,int handleLevel)
    :Handle(handleName,handleLevel){}
ConcreteHandleB::~ConcreteHandleB(){}

void ConcreteHandleB::HandleRequest(Request* request)
{
	if((this->getHandleLevel())==(request->getRequestLeverl()))
	{
		cout<<this->getHandleName()<<"处理问题："<<request->getRequestName()<<endl;
	}else if(this->GetSuccessor() != 0)
	{
		cout<<"我是"<<this->getHandleName()<<",问题("<<request->getRequestName()<<")不归我处理,已经后传"<<endl;
		this->GetSuccessor()->HandleRequest(request);
	}
	else
	{
		cout<<"我是责任链最后一人:"<<this->getHandleName()<<",问题("<<request->getRequestName()<<")没有找到合适的处理者，暂时无法处理，请与管理员联系"<<endl;
	}
}