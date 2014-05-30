#pragma once

//显示接口，在C++中使用多重继承完成此类目的没什么必要，但为了和原著相符，这里还是定义了该接口

class DisplayElement
{
public:
	DisplayElement(void);

	//当布告板需要显示时，调用此方法
	virtual void display() = 0;

	~DisplayElement(void);
};
