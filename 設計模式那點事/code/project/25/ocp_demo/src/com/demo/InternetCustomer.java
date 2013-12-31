package com.demo;

/**
 * 网络顾客实现类
 * 
 * @author
 * 
 */
public class InternetCustomer extends AbstractCustomer {

	// 网络预定
	private final String internet;

	/**
	 * 构造方法传入姓名、性别、年龄、网络
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 * @param internet
	 */

	public InternetCustomer(String name, String sex, int age, String internet) {
		super(name, sex, age);
		this.internet = internet;
	}

	/**
	 * 计算消费总价(打八折)
	 */
	@Override
	public double totalPrice(int price, int days) {
		return (price * days) * 0.8;
	}

	/**
	 * 
	 */
	@Override
	public String toString() {
		return super.toString() + " 网络预订(打八折):" + this.internet;
	}
}
