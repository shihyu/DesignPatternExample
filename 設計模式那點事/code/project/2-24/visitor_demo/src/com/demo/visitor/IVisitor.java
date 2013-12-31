package com.demo.visitor;

import com.demo.structure.Employees;
import com.demo.structure.Manager;

/**
 * 访问者接口
 * 
 * @author
 * 
 */
public interface IVisitor {
	// 访问管理者
	public void visit(Manager manager);

	// 访问普通员工
	public void visit(Employees employees);
}
