package com.demo.common;

/**
 * 开关基类
 * 
 * @author
 * 
 */
public abstract class AbstractSwitch
{
	// 打开开关
	public abstract void turnOn();

	// 照明
	public abstract void light();

	// 关闭开关
	public abstract void turnOff();

	// 开灯照明
	public final void makeLight()
	{
		this.turnOn();
		this.light();
		this.turnOff();
	}
}
