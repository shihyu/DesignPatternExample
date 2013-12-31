package com.demo.bridge.switchs;

import com.demo.bridge.lights.ILight;

/**
 * 开关顶层类
 * 
 * @author
 * 
 */
public class BaseSwitch {
	// 使用组合 设置ILight为内部私有属性 此为桥梁
	protected ILight light;

	// 构造方法将 外部的light类型注入进来
	public BaseSwitch(ILight light) {
		this.light = light;
	}

	/**
	 * 开灯方法
	 */
	public final void makeLight() {
		// 打开开关 接通电流
		this.light.electricConnected();
		// 照明
		this.light.light();
		// 关闭开关 关闭电流
		this.light.electricClosed();
	}
}
