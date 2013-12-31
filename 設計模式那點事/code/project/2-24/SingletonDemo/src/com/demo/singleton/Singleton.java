package com.demo.singleton;

/**
 * 单例设计模式
 * 
 * @author
 * 
 */
public class Singleton {

	// 类共享实例对象 实例化
	private static Singleton singleton = new Singleton();

	// 私有构造方法
	private Singleton() {
		System.out.println("-- this is Singleton!!!");
	}

	// 获得单例方法
	public static Singleton getInstance() {
		// 直接返回共享对象
		return singleton;
	}

}
