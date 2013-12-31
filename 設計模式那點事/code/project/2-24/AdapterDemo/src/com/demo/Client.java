package com.demo;

import com.demo.adapter.AdapterPower12;
import com.demo.adapter.AdapterPower12Ext;
import com.demo.power.v12.IPower12;
import com.demo.power.v12.Power12;
import com.demo.power.v220.Power220;

/**
 * 客户端程序调用
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 我们首先 生成一个220V电源对象！
		Power220 power220 = new Power220();
		power220.output220v();

		// 接下来，我们在生成一个12V电源对象！
		IPower12 power12 = new Power12();
		power12.output12v();

		// 最后，我们使用电源适配器 将220V电源转换为12V电源！
		System.out.println("\n----电源适配器转换中...");
		IPower12 adapterPower12 = new AdapterPower12(power220);
		adapterPower12.output12v();
		System.out.println("----电源适配器转换结束！");

		// 类适配器实现
		System.out.println("\n----类适配器 电源适配器转换中...");
		IPower12 adapterPower12Ext = new AdapterPower12Ext(power220);
		adapterPower12Ext.output12v();
		System.out.println("----类适配器 电源适配器转换结束！");
	}
}
