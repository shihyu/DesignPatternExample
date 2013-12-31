package com.demo;

import com.demo.common.Employees;
import com.demo.common.Manager;

/**
 * 主应用程序
 * 
 * @author
 * 
 */
public class ClientOfCommon {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 公司CEO
		Manager boss = new Manager("1", "大老板", "CEO", 100000);
		/**
		 * CEO手下有若干部门经理
		 */
		// 财务部经理
		Manager financeManager = new Manager("11", "张总", "财务部经理", 60000);

		// 人事部经理
		Manager personnelManager = new Manager("12", "王总", "人事部经理", 60000);

		// 技术部经理
		Manager technicalManager = new Manager("13", "陈总", "技术部经理", 60000);
		/**
		 * 技术部门还有助理和若干主管
		 */
		// 技术部门助理
		Manager deptAssistant = new Manager("1301", "王助理", "部门助理", 20000);
		// 技术部门主管1
		Manager deptManager1 = new Manager("1302", "主管1", "技术主管", 30000);
		/**
		 * 技术主管deptManager1 下面还有软件工程师（最终干活的人）
		 */
		Employees softwareEngineer1 = new Employees("1302001", "张三", "软件工程师",
				5000);
		Employees softwareEngineer2 = new Employees("1302002", "李四", "软件工程师",
				5500);
		Employees softwareEngineer3 = new Employees("1302003", "王五", "软件工程师",
				4500);
		// 为技术主管1添加员工信息
		deptManager1.add(softwareEngineer1);
		deptManager1.add(softwareEngineer2);
		deptManager1.add(softwareEngineer3);

		// 技术部门主管2
		Manager deptManager2 = new Manager("1303", "主管2", "技术主管", 30000);

		// 为技术部经理 添加：部门助理、技术主管1和技术主管2
		technicalManager.add(deptAssistant);
		technicalManager.add(deptManager1);
		technicalManager.add(deptManager2);

		// 市场部经理
		Manager marketingManager = new Manager("14", "吴总", "市场部经理", 60000);

		// 为CEO 添加：财务部经理、人事部经理、技术部经理和市场部经理
		boss.add(financeManager);
		boss.add(personnelManager);
		boss.add(technicalManager);
		boss.add(marketingManager);

		// 打印CEO 信息
		boss.printUserBaseInfo();
		// 打印CEO 手下员工信息
		boss.printEmployeesInfo(1);
	}
}
