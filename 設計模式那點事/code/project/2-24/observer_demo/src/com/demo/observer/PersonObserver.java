package com.demo.observer;

import com.demo.subject.ISubject;
/**
 * 个人用户观察者
 * @author 
 *
 */
public class PersonObserver implements IObserver
{

	public void update(ISubject subject)
	{
		System.out.println("个人收到高温预警：" + subject.temperatureReport());
	}

}
