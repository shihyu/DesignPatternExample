// Context.h: interface for the Context class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONTEXT_H__337390AD_A5A0_4417_A130_C067567C168D__INCLUDED_)
#define AFX_CONTEXT_H__337390AD_A5A0_4417_A130_C067567C168D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class State; /** * **/ 

class Context
{
public:
	Context();
	Context(State* state);
	~Context();
	//此方法调用状态功能但不切换下一个
	void OprationInterface();
	//此方法调用状态功能切换下一个（大）
	void OperationChangStateLarge();
    //此方法调用状态功能切换下一个（小）
    void OperationChangStateSmall();
protected:
private:
	friend class State; //表明在State类中可以访问Context类的private字段
	bool ChangeState(State* state);//用于设置状态
private:
	State* _state;
};

#endif // !defined(AFX_CONTEXT_H__337390AD_A5A0_4417_A130_C067567C168D__INCLUDED_)
