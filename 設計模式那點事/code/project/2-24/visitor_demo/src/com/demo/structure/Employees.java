package com.demo.structure;

import com.demo.visitor.IVisitor;

/**
 * 普通员工（真正干活的人）
 * 
 * @author
 * 
 */
public class Employees extends Staff
{
	// 构造方法
	public Employees(String no, String name, String position, float salary)
	{
		super(no, name, position, salary);
	}

	/**
	 * 添加员工信息
	 */
	@Override
	public void add(Staff staff)
	{
		return;
	}

	/**
	 * 删除员工信息
	 */
	@Override
	public Staff remove(String no)
	{
		// 直接返回null
		return null;
	}

	// 接收访问者对象
	public void accept(IVisitor visitor)
	{
		visitor.visit(this);
	}
}
