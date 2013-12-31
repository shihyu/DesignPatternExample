package com.demo;

import com.demo.multipleton.Multipleton;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class MultipletonClient {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 获得Multipleton对象实例
		Multipleton multipleton = Multipleton.getRandomInstance();
		System.out.println("multipleton:" + multipleton.getNo());
		// 在次获得Multipleton对象实例
		Multipleton multipleton2 = Multipleton.getRandomInstance();
		System.out.println("multipleton2:" + multipleton2.getNo());
		// 比较两个对象是否是同一个对象实例
		if (multipleton == multipleton2) {
			System.out.println("--这是同一个对象！");
		} else {
			System.out.println("--这是不同的对象！");
		}
	}
}
