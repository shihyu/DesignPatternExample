package com.demo.factory.model;

/**
 * 定义抽象宝刀
 * 
 * @author Administrator
 * 
 */
public abstract class AbstractSword
{
	// 宝刀的名字
	private String name;

	// 抽象父类的构造方法
	public AbstractSword()
	{
	}

	// 获得宝刀名字
	public String getName()
	{
		return name;
	}

	// 设置宝刀名字
	public void setName(String name)
	{
		this.name = name;
	}

}
