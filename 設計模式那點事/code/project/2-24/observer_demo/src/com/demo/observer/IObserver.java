package com.demo.observer;

import com.demo.subject.ISubject;
/**
 * 观察者接口
 * @author 
 *
 */
public interface IObserver
{
	//更新方法
	public void update(ISubject subject);
}
