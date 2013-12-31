package com.demo;

import com.demo.singleton.Singleton;

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
		// 首先 检验是否能用new操作符创建Singleton对象实例
		Singleton singleton = Singleton.getInstance();
		// 在此获得Singleton对象实例
		Singleton singleton2 = Singleton.getInstance();
		// 比较两个对象是否是同一个对象实例
		if (singleton == singleton2) {
			System.out.println("--这是同一个对象！");
		} else {
			System.out.println("--这是不同的对象！");
		}
	}
}
