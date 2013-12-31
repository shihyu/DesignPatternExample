package com;

import com.prototype.factory.ILifeFactory;
import com.prototype.factory.impl.LifeFactoryImpl;
import com.prototype.pojo.DayLife;

/**
 * 主应用程序
 * 
 * @author
 * 
 */
public class Client {

	public static void main(String[] args) {
		// 创建工厂
		ILifeFactory lifeFactory = new LifeFactoryImpl();
		// 打印输出DayLife默认内容
		lifeFactory.getNewInstance().print();

		// 再次获得DayLife，修改getUp内容后 输出内容
		System.out.println("------------------------");
		DayLife dayLife = lifeFactory.getNewInstance();
		dayLife.setGetUp("早上赖床了！7::15才起床！");
		dayLife.print();

		// 再次获得DayLife，修改getUp内容后 输出内容
		// System.out.println("------------------------");
		// DayLife dayLife2 = lifeFactory.getNewInstance();
		// dayLife2.setGetUp("早上赖床了！7::30才起床！");
		// dayLife2.print();
	}
}
