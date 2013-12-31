package com.demo.factory.itf;

import com.demo.factory.model.AbstractSword;

/**
 * 宝刀工厂
 * 
 * @author Administrator
 * 
 */
public interface ISwordFactory
{
	/**
	 * 生产各类宝刀（返回值是抽象宝刀类型）
	 * 
	 * @return
	 */
	public AbstractSword createSword();
}
