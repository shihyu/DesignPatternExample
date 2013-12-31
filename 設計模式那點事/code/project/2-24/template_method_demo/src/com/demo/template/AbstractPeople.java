package com.demo.template;

/**
 * 抽象工人
 * 
 * @author
 * 
 */
public abstract class AbstractPeople {

	/**
	 * 起床方法
	 */
	public void getUp() {
		System.out.println("起床...");
	}

	/**
	 * 抽象吃早餐方法
	 */
	protected abstract void haveBreakfast();

	/**
	 * 抽象乘坐交通工具方法
	 */
	protected abstract void transport();

	/**
	 * 工作方法
	 */
	public void doWork() {
		System.out.println("工作...");
	}

	/**
	 * 模板方法（每天的行为）
	 */
	public final void dayLift() {
		System.out.println("====================");
		// 起床
		getUp();
		// 早餐
		haveBreakfast();
		// 交通工具
		transport();
		// 工作
		doWork();
		System.out.println("====================");
	}
}
