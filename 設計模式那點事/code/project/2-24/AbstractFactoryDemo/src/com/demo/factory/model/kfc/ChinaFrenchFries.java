package com.demo.factory.model.kfc;

import com.demo.factory.model.FrenchFries;

/**
 * 薯条实现类
 * 
 * @author maofw
 * 
 */

public class ChinaFrenchFries extends FrenchFries
{
	public ChinaFrenchFries(int num)
	{
		this.kind = "普通";
		this.price = 8.0f;
		this.num = num;
	}
}
