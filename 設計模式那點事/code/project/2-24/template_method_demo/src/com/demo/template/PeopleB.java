package com.demo.template;

/**
 * 工人B
 * 
 * @author
 * 
 */
public class PeopleB extends AbstractPeople {
	/**
	 * 具体吃早餐方法
	 */
	@Override
	protected void haveBreakfast() {
		System.out.println("B早餐喝粥，吃小菜...");

	}

	/**
	 * 具体乘坐交通工具方法
	 */
	@Override
	protected void transport() {
		System.out.println("B坐公共汽车上班...");

	}

}
