package com.demo.factory.itf;

import com.demo.factory.model.Beverage;
import com.demo.factory.model.ChickenWings;
import com.demo.factory.model.FrenchFries;
import com.demo.factory.model.Hamburg;
import com.demo.factory.model.kfc.ChinaBeverage;
import com.demo.factory.model.kfc.ChinaChickenWings;
import com.demo.factory.model.kfc.ChinaFrenchFries;
import com.demo.factory.model.kfc.ChinaHanburm;

public class ChinaKfcFactory implements IKfcFactory
{

	// 生产可乐
	public Beverage createBeverage(int num)
	{
		return new ChinaBeverage(num);
	}

	// 生产奥尔良烤鸡翅
	public ChickenWings createChickenWings(int num)
	{
		return new ChinaChickenWings(num);
	}

	// 生产薯条
	public FrenchFries createFrenchFries(int num)
	{
		return new ChinaFrenchFries(num);
	}

	// 生产麻辣风味鸡腿汉堡
	public Hamburg createHamburg(int num)
	{
		return new ChinaHanburm(num);
	}

}
