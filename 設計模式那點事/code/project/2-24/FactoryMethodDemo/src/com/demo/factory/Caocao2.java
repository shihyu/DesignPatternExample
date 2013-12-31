package com.demo.factory;

import com.demo.factory.itf.ISwordFactory;
import com.demo.factory.model.AbstractSword;
import com.demo.factory.model.object.BaxingSword;

/**
 * 使用八星宝刀的曹操具体工厂
 * 
 * @author
 * 
 */
public class Caocao2 implements ISwordFactory
{

	// 生产八星宝刀
	public AbstractSword createSword()
	{
		return new BaxingSword();
	}

}
