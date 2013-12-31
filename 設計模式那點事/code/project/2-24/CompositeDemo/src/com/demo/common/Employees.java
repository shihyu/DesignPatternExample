package com.demo.common;

/**
 * 普通员工
 * 
 * @author
 * 
 */
public class Employees {
	// 员工号
	private String no;
	// 职工名字
	private String name;
	// 职位
	private String position;
	// 薪资
	private float salary;

	// 构造方法
	public Employees(String no, String name, String position, float salary) {
		this.no = no;
		this.name = name;
		this.position = position;
		this.salary = salary;

	}

	// 获得用户基本信息
	public void printUserBaseInfo() {
		System.out.println("|" + this.no + " " + this.name + " "
				+ this.position + " " + this.salary);
	}

	public String getNo() {
		return no;
	}

	public void setNo(String no) {
		this.no = no;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPosition() {
		return position;
	}

	public void setPosition(String position) {
		this.position = position;
	}

	public float getSalary() {
		return salary;
	}

	public void setSalary(float salary) {
		this.salary = salary;
	}

}
