package com.demo.person;

import java.util.Random;

import com.demo.iterator.ArrPersonIterator;
import com.demo.iterator.Iterator;

/**
 * 人员列表信息
 * 
 * @author
 * 
 */
public class PersonList implements IPersonList {
	// 存储用户信息列表
	private final IPerson[] list = new IPerson[10];

	// 构造方法初始化人员信息
	public PersonList() {
		Random random = new Random();
		// 创建人员信息
		for (int i = 0; i < 10; i++) {
			IPerson person = new Person("人员" + i, random.nextInt(30), random
					.nextInt(2));
			list[i] = person;
			// this.list.add(person);
		}
	}

	/**
	 * 获得内部存储人员信息内容
	 * 
	 * @return
	 */

	public IPerson[] getPersonList() {
		return list;
	}

	/**
	 * 迭代器
	 * 
	 * @return
	 */
	public Iterator iterator() {
		return new ArrPersonIterator(this.list);
	}
}
