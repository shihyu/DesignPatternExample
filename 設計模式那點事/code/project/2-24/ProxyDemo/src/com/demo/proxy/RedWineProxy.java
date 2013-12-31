package com.demo.proxy;

import com.demo.real.IRedWine;

/**
 * 红酒代理商
 * 
 * @author
 * 
 */
public class RedWineProxy implements IRedWine {

	// 真正的红酒生产厂商
	private final IRedWine redWine;
	// 代理商出售红酒的权限
	private final boolean permission = true;

	// 默认构造方法
	public RedWineProxy(IRedWine redWine) {
		this.redWine = redWine;
	}

	// 代理商生产红酒方法（代理商不生产红酒，从真正的工厂拿酒销售）
	@Override
	public void product() {
		// 判断代理商是否具有红酒代理权
		if (this.permission) {
			// 代理商有权限卖红酒 是合法的
			System.out.println("[ 这是合法的红酒代理商 ]");
			System.out.println("代理商接到订单，通知工厂生产...");
			this.redWine.product();
		} else {
			System.out.println("[ 这是非法的红酒代理商！]");
		}

	}

	// 代理商销售红酒方法
	@Override
	public void sell() {
		if (this.permission) {
			this.redWine.sell();
			System.out.println("代理商从工厂拿到批发价红酒，然后以较高价格销售，从中赚取一定的差价...");
		} else {
			System.out.println("[ 这是非法的红酒代理商！]");
		}
	}

}
