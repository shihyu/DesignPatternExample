// State.h: interface for the State class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STATE_H__92A29E6D_8136_4609_8513_F0FE358B106C__INCLUDED_)
#define AFX_STATE_H__92A29E6D_8136_4609_8513_F0FE358B106C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class Context; //Ç°ÖÃÉùÃ÷

class State
{
public:
	State(){}
	virtual ~State(){}
	virtual void OperationInterface() = 0;
	virtual void OperationChangeStateLarge(Context*) = 0;
	virtual void OperationChangeStateSmall(Context*) = 0;
protected:
	bool ChangeState(Context* con,State* st);
private:
	//bool ChangeState(Context* con,State* st);
};

class ConcreteStateA:public State
{
public:
	ConcreteStateA(){}
	~ConcreteStateA(){}
	void OperationInterface( );
	void OperationChangeStateLarge(Context*);
	void OperationChangeStateSmall(Context*);
protected:
private:
};

class ConcreteStateB:public State
{
public:
	ConcreteStateB(){}
	~ConcreteStateB(){}
	void OperationInterface();
	void OperationChangeStateLarge(Context*);
	void OperationChangeStateSmall(Context*);
protected:	
private:
};

class ConcreteStateC:public State
{
public:
	ConcreteStateC(){}
	~ConcreteStateC(){}
	void OperationInterface();
	void OperationChangeStateLarge(Context*);
	void OperationChangeStateSmall(Context*);
protected:
private:
};

#endif // !defined(AFX_STATE_H__92A29E6D_8136_4609_8513_F0FE358B106C__INCLUDED_)
