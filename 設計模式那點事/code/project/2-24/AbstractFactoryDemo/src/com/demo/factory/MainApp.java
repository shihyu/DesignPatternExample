package com.demo.factory;

import java.lang.management.ManagementFactory;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.text.NumberFormat;
import java.util.Arrays;
import java.util.Calendar;
import java.util.ResourceBundle;

import com.demo.factory.custom.Customer;
import com.demo.factory.itf.ChinaKfcFactory;
import com.demo.factory.itf.IKfcFactory;

public class MainApp
{

	/**
	 * 主应用程序方法
	 * 
	 * @param args
	 */
	public static void main(String[] args)
	{
		/**
		 * 定义一个肯德基（IKfcFactory类型）
		 */
		IKfcFactory kfcFactory = new ChinaKfcFactory();
		/**
		 * 爸爸和儿子走进肯德基，准备点餐
		 */
		Customer customer = new Customer(kfcFactory);
		/**
		 * 开始点餐
		 */
		// 一个麻辣鸡腿汉堡
		float hamhurgMoney = customer.orderHamburg(1);
		// 四个奥尔良烤鸡翅
		float chickenWingsMoney = customer.orderChickenWings(4);
		// 一包薯条
		float frenchFriesMoney = customer.orderFrenchFries(1);
		// 两杯可乐
		float beverageMoney = customer.orderBeverage(2);

		System.out.println("总计：" + (hamhurgMoney + chickenWingsMoney + frenchFriesMoney + beverageMoney));

	}
}
