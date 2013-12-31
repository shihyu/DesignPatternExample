package com.demo.template;

/**
 * 工人A
 * 
 * @author
 * 
 */
public class PeopleA extends AbstractPeople {
	/**
	 * 具体吃早餐方法
	 */
	@Override
	protected void haveBreakfast() {
		System.out.println("A早餐吃三明治，喝牛奶...");
	}

	/**
	 * 具体乘坐交通工具方法
	 */
	@Override
	protected void transport() {
		System.out.println("A开私家车上班...");

	}

}
