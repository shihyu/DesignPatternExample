package com.demo;

/**
 * 管理者类
 * 
 * @author
 * 
 */
public class Manager {
	// 处理方法
	public void process() {

		// 创建部门信息
		Dept deptA = new Dept("部门A");
		Dept deptB = new Dept("部门B");

		// 为部门添加员工
		deptA.addEmployee("张三");
		deptA.addEmployee("李四");
		deptB.addEmployee("王五");
		deptB.addEmployee("赵六");

		// 展示部门信息
		deptA.show();
		deptB.show();
	}
}
