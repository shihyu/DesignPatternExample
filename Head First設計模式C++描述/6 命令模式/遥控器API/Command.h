#pragma once

//让所有的命令对象实现相同的包含一个方法的接口
class Command
{
public:
	Command(void);
	~Command(void);

	virtual void execute() = 0;
};
