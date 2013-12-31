package com.demo.template;

/**
 * 工人C
 * 
 * @author
 * 
 */
public class PeopleC extends AbstractPeople {
	/**
	 * 具体吃早餐方法
	 */
	@Override
	protected void haveBreakfast() {
		System.out.println("C早餐吃煎饼，喝豆浆...");
	}

	/**
	 * 具体乘坐交通工具方法
	 */
	@Override
	protected void transport() {
		System.out.println("C坐地铁上班...");

	}

}
