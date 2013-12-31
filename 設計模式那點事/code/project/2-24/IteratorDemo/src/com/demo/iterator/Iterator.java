package com.demo.iterator;

/**
 * 迭代器接口
 * 
 * @author
 * 
 */
public interface Iterator {

	// 判断是否含有下一个届节点
	public boolean hasNext();

	// 获得下一个节点对象
	public Object next();

	// 删除对象
	public Object remove();
}
