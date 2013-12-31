package com.demo;

import com.demo.common.AbstractSwitch;
import com.demo.common.sub.CrystalLight;
import com.demo.common.sub.IncandescentLight;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 白炽灯 实例
		AbstractSwitch light = new IncandescentLight();
		// 水晶灯 实例
		CrystalLight light2 = new CrystalLight();

		System.out.println("-- 一般开关 -- ");
		// 一般开关
		light.makeLight();

		System.out.println("\n-- 遥控开关 -- ");
		// 遥控开关
		light2.makeRemoteLight(1);
	}
}
