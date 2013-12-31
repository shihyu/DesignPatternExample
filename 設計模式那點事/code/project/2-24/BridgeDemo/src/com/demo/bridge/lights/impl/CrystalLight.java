package com.demo.bridge.lights.impl;

import com.demo.bridge.lights.ILight;

/**
 * 水晶灯 实现
 * 
 * @author
 * 
 */
public class CrystalLight implements ILight
{
	// 电流关闭
	public void electricClosed()
	{
		System.out.println("水晶灯被关闭了...");

	}

	// 接通电流
	public void electricConnected()
	{
		System.out.println("水晶灯被打开了...");

	}

	// 照明
	public void light()
	{
		System.out.println("水晶灯照明！");

	}

}
