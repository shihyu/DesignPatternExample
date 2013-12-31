package com.demo.real.impl;

import com.demo.real.IRedWine;

/**
 * 真正的生产红酒工厂
 * 
 * @author
 * 
 */
public class RealRedWineFactory implements IRedWine {
	// 生产红酒方法
	@Override
	public void product() {
		System.out.println("红酒工厂生产红酒...");
	}

	// 销售酒方法
	public void sell() {
		System.out.println("红酒工厂销售红酒...");
	}

}
