package com.demo;

/**
 * 正常入住顾客
 * 
 * @author
 * 
 */
public class NormalCustomer extends AbstractCustomer {

	/**
	 * 构造方法传入姓名、性别、年龄
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 */
	public NormalCustomer(String name, String sex, int age) {
		super(name, sex, age);
	}

	/**
	 * 计算消费总价
	 */
	@Override
	public double totalPrice(int price, int days) {
		return price * days;
	}

}
