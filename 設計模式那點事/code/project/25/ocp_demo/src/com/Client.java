package com;

import com.demo.ICustomer;
import com.demo.InternetCustomer;
import com.demo.NormalCustomer;

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
		// 创建普通顾客信息
		ICustomer customer1 = new NormalCustomer("张三", "男", 24);
		ICustomer customer2 = new NormalCustomer("李四", "男", 22);
		ICustomer customer3 = new NormalCustomer("王五", "女", 23);
		ICustomer customer4 = new NormalCustomer("赵六", "男", 25);

		// 计算普通顾客消费情况
		customer1.consume(240, 2);
		customer2.consume(200, 3);
		customer3.consume(100, 1);
		customer4.consume(150, 4);

		// 网络预订顾客
		ICustomer customer5 = new InternetCustomer("路人甲", "男", 26, "A网络");
		ICustomer customer6 = new InternetCustomer("路人已", "女", 27, "B网络");

		// 计算网络预订顾客消费情况
		customer5.consume(200, 1);
		customer6.consume(300, 2);
	}
}
