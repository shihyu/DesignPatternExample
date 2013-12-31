package com.demo.visitor;

import com.demo.structure.Employees;
import com.demo.structure.Manager;

/**
 * 计算薪资访问者具体实现
 * 
 * @author
 * 
 */

public class SalaryVisitor implements ISalaryVisitor {
	// 管理者薪资总和
	private float managerSalary;
	// 普通员工薪资总和
	private float employeesSalary;

	public SalaryVisitor() {
		managerSalary = 0;
		employeesSalary = 0;
	}

	// 访问管理者
	public void visit(Manager manager) {
		managerSalary += manager.getSalary();
	}

	// 访问普通员工
	public void visit(Employees employees) {
		employeesSalary += employees.getSalary();
	}

	// 统计一般员工薪资情况
	public void printEmployeesTotalSalary() {
		System.out.println("一般员工薪资总和：" + employeesSalary);
	}

	// 统计管理者薪资情况
	public void printManagerTotalSalary() {
		System.out.println("管理者薪资总和：" + managerSalary);

	}

	// 统计所有员工薪资情况
	public void printTotalSalary() {
		System.out.println("员工薪资总和：" + (managerSalary + employeesSalary));

	}

}
