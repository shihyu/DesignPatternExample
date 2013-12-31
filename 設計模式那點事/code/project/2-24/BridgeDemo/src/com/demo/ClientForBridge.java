package com.demo;

import com.demo.bridge.lights.ILight;
import com.demo.bridge.lights.impl.CrystalLight;
import com.demo.bridge.lights.impl.IncandescentLight;
import com.demo.bridge.switchs.BaseSwitch;
import com.demo.bridge.switchs.sub.RemoteControlSwitch;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class ClientForBridge {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 白炽灯 实例
		ILight incandescentLight = new IncandescentLight();
		// 水晶灯 实例
		ILight crystalLight = new CrystalLight();

		// 一般开关
		System.out.println("-- 一般开关 -- ");
		BaseSwitch switch1 = new BaseSwitch(incandescentLight);
		switch1.makeLight();
		System.out.println("\n-- 遥控开关 -- ");
		// 遥控开关
		RemoteControlSwitch remoteControlSwitch = new RemoteControlSwitch(
				crystalLight);
		remoteControlSwitch.makeRemoteLight(1);
	}
}
