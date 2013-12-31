package com.demo.common;

import java.util.ArrayList;

/**
 * 管理者
 * 
 * @author
 * 
 */
public class Manager {
	// 员工号
	private String no;
	// 职工名字
	private String name;
	// 职位
	private String position;
	// 薪资
	private float salary;
	// 存储手下员工信息
	private ArrayList arrayList = new ArrayList();
	// 私有属性 长度字符串
	private int length;

	// 构造方法
	public Manager(String no, String name, String position, float salary) {
		this.no = no;
		this.name = name;
		this.position = position;
		this.salary = salary;

		// 计算总字节长度
		this.length += (no == null || "".equals(no.trim())) ? 0
				: no.getBytes().length;
		this.length += (name == null || "".equals(name.trim())) ? 0 : name
				.getBytes().length;
		this.length += (position == null || "".equals(position.trim())) ? 0
				: position.getBytes().length;
		this.length += String.valueOf(salary).getBytes().length;

	}

	/**
	 * 增加一个管理人员
	 */
	@SuppressWarnings("unchecked")
	public void add(Manager manager) {
		this.arrayList.add(manager);
	}

	/**
	 * 增加一个普通员工
	 */
	@SuppressWarnings("unchecked")
	public void add(Employees employees) {
		this.arrayList.add(employees);
	}

	// 获得用户基本信息
	public void printUserBaseInfo() {
		System.out.println("|" + this.no + " " + this.name + " "
				+ this.position + " " + this.salary);
	}

	/**
	 * 打印员工信息
	 */
	public void printEmployeesInfo(int layer) {
		int tmpLayer = ++layer;
		for (int i = 0; i < this.arrayList.size(); i++) {
			Object object = this.arrayList.get(i);
			if (object == null) {
				continue;
			}

			// 判断是普通员工还是管理人员
			if (object instanceof Employees) {

				// 如果是普通员工 则输出员工基本信息
				// 打印'-'
				printChar(tmpLayer);
				// 打印员工基本信息
				((Employees) object).printUserBaseInfo();

			} else if (object instanceof Manager) {

				// 如果是管理人员 则输出管理者基本信息然后输出管理者手下员工信息
				// 打印'-'
				printChar(tmpLayer);
				// 实例化Manager
				Manager manager = (Manager) object;
				// 打印管理者基本信息
				manager.printUserBaseInfo();
				// 打印管理者手下员工信息
				manager.printEmployeesInfo(tmpLayer);
			}
		}
	}

	// 打印若干字符
	protected void printChar(int layer) {
		for (int j = 0; j < layer * 2; j++) {
			System.out.print("-");
		}
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

	public ArrayList getArrayList() {
		return arrayList;
	}

	public void setArrayList(ArrayList arrayList) {
		this.arrayList = arrayList;
	}

}
