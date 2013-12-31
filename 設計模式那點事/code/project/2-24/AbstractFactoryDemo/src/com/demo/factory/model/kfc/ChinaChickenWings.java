package com.demo.factory.model.kfc;

import com.demo.factory.model.ChickenWings;

/**
 * 鸡翅实现类
 * 
 * @author maofw
 * 
 */
public class ChinaChickenWings extends ChickenWings
{
	public ChinaChickenWings(int num)
	{
		this.kind = "奥尔良";
		this.price = 2.5f;
		this.num = num;
	}
}
