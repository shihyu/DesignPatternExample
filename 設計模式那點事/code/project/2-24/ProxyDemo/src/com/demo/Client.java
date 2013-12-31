package com.demo;

import com.demo.proxy.RedWineProxy;
import com.demo.real.IRedWine;
import com.demo.real.impl.RealRedWineFactory;

/**
 * 主应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		// 创建真实红酒工厂对象实例
		IRedWine realRedWineFactory = new RealRedWineFactory();
		// 获得代理对象实例
		IRedWine redWineProxy = new RedWineProxy(realRedWineFactory);
		// 代理商生产红酒（其实真正的生产的是工厂）
		redWineProxy.product();
		// 代理商销售红酒（批发价拿货，然后较高价格出售，赚取差额利润）
		redWineProxy.sell();
	}
}
