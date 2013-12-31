package com.demo.iterator;

import com.demo.person.IPerson;

/**
 * 数组迭代器实现
 * 
 * @author
 * 
 */
public class ArrPersonIterator implements Iterator {
	// 私有属性存储人员列表对象信息
	private final IPerson[] personList;
	// 存储位置信息 初始值为-1
	private int index = -1;

	/**
	 * 构造方法将人员列表对象传入
	 * 
	 * @param personList
	 */
	public ArrPersonIterator(IPerson[] personList) {
		this.personList = personList;
	}

	// 判断是否含有下一个节点
	public boolean hasNext() {
		return (this.personList == null ? false
				: (index < this.personList.length - 1));
	}

	// 获得下一个节点对象
	public Object next() {
		if (this.personList != null && (index < this.personList.length - 1)) {
			// 获得人员列表对象中的人员信息
			return this.personList[++index];
		}
		return null;
	}

	// 删除对象
	public Object remove() {
		if (this.personList != null) {
			IPerson person = this.personList[index];
			this.personList[index] = null;
			return person;
		}

		return null;
	}

}
