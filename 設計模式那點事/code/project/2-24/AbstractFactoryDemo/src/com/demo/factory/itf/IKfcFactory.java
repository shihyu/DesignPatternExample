package com.demo.factory.itf;

import com.demo.factory.model.Beverage;
import com.demo.factory.model.ChickenWings;
import com.demo.factory.model.FrenchFries;
import com.demo.factory.model.Hamburg;

/**
 * 肯德基抽象工厂基类
 * 
 * @author maofw
 * 
 */
public interface IKfcFactory
{
	// 生产汉堡
	public Hamburg createHamburg(int num);

	// 生产薯条
	public FrenchFries createFrenchFries(int num);

	// 生产鸡翅
	public ChickenWings createChickenWings(int num);

	// 生产饮料
	public Beverage createBeverage(int num);
}
