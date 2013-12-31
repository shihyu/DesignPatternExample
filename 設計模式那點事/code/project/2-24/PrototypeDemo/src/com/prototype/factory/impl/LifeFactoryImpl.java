package com.prototype.factory.impl;

import com.prototype.factory.ILifeFactory;
import com.prototype.pojo.DayLife;

/**
 * 工厂实现类
 * 
 * @author
 * 
 */
public class LifeFactoryImpl implements ILifeFactory {

	// DayLife对象实例用于初始化
	private static DayLife dayLife = null;

	/**
	 * getNewInstance方法实现：
	 * 
	 * 首先判断dayLife是否为null：
	 * 如果是null，则使用new创建一个DayLife对象，同时设置初始内容，然后赋值给dayLife对象实例，然后返回；
	 * 如果不是null，则使用dayLift的clone方法产生一个新对象并复制给dayLife对象，然后返回
	 */
	@Override
	public DayLife getNewInstance() {
		// 判断dayLife是否为null
		if (dayLife == null) {
			// 如果为null
			// 输出是使用new 产生的对象。注意：new这个只使用一次哦！
			System.out.println(" new DayLife !");
			// 设置dayLife内容
			dayLife = new DayLife();
			dayLife.setGetUp("7:00起床");
			dayLife.setByBus("7:30坐公交车");
			dayLife.setGetFood("8:30到公司附近的公交站下车，经过路旁的早餐车时会顺便买好早餐一起带到公司");
			dayLife.setNoon("午餐在公司附近的小餐馆解决，然后在办公室的座椅上小憩一会");
			dayLife.setAfternoonWork("13:30开始了下午的工作");
			dayLife.setGoHome("17:30准时下班");
			dayLife.setNight("晚上休闲娱乐");
		} else {
			// 如果不为null
			// 输出是使用clone方法产生的对象
			System.out.println(" clone DayLife !");
			// 将clone对象赋值给dayLife ，返回
			dayLife = dayLife.clone();
		}
		return dayLife;
	}
}
