package com.demo;

import java.util.HashMap;
import java.util.Map;

import com.demo.factory.Caocao2;
import com.demo.factory.itf.ISwordFactory;
import com.demo.factory.model.AbstractSword;

public class MainApp
{

	/**
	 * @param args
	 */
	public static void main(String[] args)
	{

		// 创建曹操实例对象（返回使用接口类型 ISwordFactory）
		// ISwordFactory swordFactory = new Caocao();
		ISwordFactory swordFactory = new Caocao2();
		// 获得宝刀实例——八星宝刀
		AbstractSword sword = swordFactory.createSword();
		// 刺杀董卓
		System.out.println("曹操使用" + sword.getName() + "刺杀董卓！");
	}
}
