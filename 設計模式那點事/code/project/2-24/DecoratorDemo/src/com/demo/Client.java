package com.demo;

import com.demo.abs.IBread;
import com.demo.abs.NormalBread;
import com.demo.decorator.CornDecorator;
import com.demo.decorator.SweetDecorator;

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
		// 生产装饰馒头
		System.out.println("\n====开始装饰馒头！！！");
		// 创建普通的正常馒头实例
		// 这是我们需要包装（装饰）的对象实例
		IBread normalBread = new NormalBread();

		// 下面就开始 对正常馒头进行装饰了！！！
		// 使用甜蜜素装饰馒头
		normalBread = new SweetDecorator(normalBread);
		// 使用柠檬黄的着色剂装饰馒头
		normalBread = new CornDecorator(normalBread);
		// 生产馒头信息
		normalBread.process();
		System.out.println("====装饰馒头结束！！！");

	}

}
