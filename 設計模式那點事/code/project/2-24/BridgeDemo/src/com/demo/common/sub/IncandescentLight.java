package com.demo.common.sub;

import com.demo.common.AbstractSwitch;

/**
 * 白炽灯
 * 
 * @author
 * 
 */
public class IncandescentLight extends AbstractSwitch {

	// 照明方法实现
	@Override
	public void light() {
		System.out.println("白炽灯照明！");

	}

	// 关闭开关方法 实现
	@Override
	public void turnOff() {
		System.out.println("白炽灯关闭了...");

	}

	// 打开开关方法实现
	@Override
	public void turnOn() {
		System.out.println("白炽灯打开了...");

	}

}
