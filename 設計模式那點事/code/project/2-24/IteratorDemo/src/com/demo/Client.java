package com.demo;

import com.demo.iterator.Iterator;
import com.demo.person.IPerson;
import com.demo.person.IPersonList;
import com.demo.person.PersonList;

public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建人员列表对象
		IPersonList personList = new PersonList();
		System.out.println("----使用迭代器输出人员信息 start......");
		// 生成迭代器
		Iterator iterator = personList.iterator();
		// 循环迭代器 遍历每一个元素输出人员信息
		while (iterator.hasNext()) {
			// 获得人员对象实例
			IPerson person = (IPerson) iterator.next();
			if (person != null) {
				// 输出人员信息
				System.out.println(person.getPersonInfo());
			}
		}
		System.out.println("----使用迭代器输出人员信息   end......");

	}
}
