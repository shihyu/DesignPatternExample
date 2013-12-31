package com.demo.iterator;

import java.util.ArrayList;

import com.demo.person.IPerson;

/**
 * 具体人员迭代器实现
 * 
 * @author
 * 
 */
public class PersonIterator implements Iterator {
	// 私有属性存储人员列表对象信息
	private final ArrayList<IPerson> personList;
	// 存储位置信息 初始值为-1
	private int index = -1;

	/**
	 * 构造方法将人员列表对象传入
	 * 
	 * @param personList
	 */
	public PersonIterator(ArrayList<IPerson> personList) {
		this.personList = personList;
	}

	// 判断是否含有下一个节点
	public boolean hasNext() {
		return (this.personList == null ? false : (index < this.personList
				.size() - 1));
	}

	// 获得下一个节点对象
	public Object next() {
		if (this.personList != null && (index < this.personList.size() - 1)) {
			// 获得人员列表对象中的人员信息
			return this.personList.get(++index);
		}
		return null;
	}

	// 删除对象
	public Object remove() {
		if (this.personList != null) {
			return this.personList.remove(index);
		}

		return null;
	}
}
