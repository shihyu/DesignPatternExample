package com.demo;

/**
 * 抽象顾客类
 * 
 * @author
 * 
 */
public abstract class AbstractCustomer implements ICustomer {
	// 姓名
	private final String name;
	// 性别
	private final String sex;
	// 年龄
	private final int age;

	/**
	 * 构造方法 传入姓名、性别、年龄信息
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 */
	public AbstractCustomer(String name, String sex, int age) {
		this.name = name;
		this.sex = sex;
		this.age = age;
	}

	/**
	 * 计算消费总价 由子类实现
	 * 
	 * @param price
	 * @param days
	 */
	protected abstract double totalPrice(int price, int days);

	/**
	 * 打印顾客消费情况
	 */
	public void consume(int price, int days) {
		// 消费情况
		String message = "客房单价:" + price + " 入住天数:" + days + " 总计:"
				+ totalPrice(price, days);
		// 输出顾客消费信息
		System.out.println(toString() + " - " + message);
	}

	/**
	 * 顾客信息
	 */
	@Override
	public String toString() {
		return "姓名:" + this.name + " 性别:" + this.sex + " 年龄:" + this.age;
	}
}
