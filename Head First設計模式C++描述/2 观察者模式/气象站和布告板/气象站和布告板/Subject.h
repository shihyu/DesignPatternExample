#pragma once

//主题接口

//声明观察者类
class Observer;

class Subject
{
public:
	Subject(void);

	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;

	//当主题状态改变时，这个方法会被调用，以通知所有的观察者
	virtual void notifyObserver() = 0;

	~Subject(void);
};
