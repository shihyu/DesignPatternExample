package com.demo;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * 部门类
 * 
 * @author
 * 
 */
public class Dept {
	// 部门名称
	private String name;
	// 员工列表
	private List<Employee> employeeList;

	public Dept(String name) {
		this.name = name;
		this.employeeList = new ArrayList<Employee>();
	}

	/**
	 * 添加员工信息
	 * 
	 * @param employee
	 */
	public void addEmployee(String employeeName) {
		this.employeeList.add(new Employee(employeeName));
	}

	/**
	 * 展示部门信息
	 */
	public void show() {
		System.out.println("===============");
		System.out.println("部门名称：" + this.name);
		System.out.println("部门员工：");

		Iterator<Employee> iterator = this.employeeList.iterator();
		while (iterator.hasNext()) {
			System.out.println(" - " + iterator.next().getName());
		}
		System.out.println("===============");
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public List<Employee> getEmployeeList() {
		return employeeList;
	}

	public void setEmployeeList(List<Employee> employeeList) {
		this.employeeList = employeeList;
	}

}
