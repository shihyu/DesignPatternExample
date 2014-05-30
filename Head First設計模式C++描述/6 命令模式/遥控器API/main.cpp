//命令模式将“请求”封装成对象，以便使用不同的请求、队列或者日志来参数化其他对象。
//命令模式也支持可撤销的操作
#include "simpleremotecontrol.h"
#include "light.h"
#include "lightOnCommand.h"

//测试
int main()
{
	//遥控器就是调用者
	SimpleRemoteControl remote;
	//电灯是请求的接收者
	Light light;
	//创建命令，将接收者传给它
	LightOnCommand lightOn(light);

	//把命令传给调用者
	remote.setCommand(&lightOn);
	remote.buttonWasPressed();

	return 0;
}