// Invoker.h: interface for the Invoker class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INVOKER_H__8293BD52_51F3_48C0_8474_70EA7B4888BA__INCLUDED_)
#define AFX_INVOKER_H__8293BD52_51F3_48C0_8474_70EA7B4888BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Command.h"
#include <iostream>

class Command;
class Invoker
{
public:
	Invoker(Command* cmd){ _cmd = cmd; }
	~Invoker(){ delete _cmd; }
	void Invoke(){ _cmd->Excute(); }
protected:
private:
	Command* _cmd;
};

#endif // !defined(AFX_INVOKER_H__8293BD52_51F3_48C0_8474_70EA7B4888BA__INCLUDED_)
