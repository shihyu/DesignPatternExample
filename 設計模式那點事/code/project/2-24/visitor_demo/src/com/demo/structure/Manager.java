package com.demo.structure;

import java.util.ArrayList;

import com.demo.visitor.IVisitor;

/**
 * 管理人员（手下有其他员工的人）
 * 
 * @author
 * 
 */
public class Manager extends Staff {

	// 存储手下员工信息
	private final ArrayList<Staff> arrayList = new ArrayList<Staff>();

	// 构造方法
	public Manager(String no, String name, String position, float salary) {
		super(no, name, position, salary);
	}

	/**
	 * 增加一个员工
	 */
	@Override
	public void add(Staff staff) {
		this.arrayList.add(staff);
	}

	/**
	 * 删除员工信息
	 */
	@Override
	public Staff remove(String no) {
		Staff staff = null;
		if (no != null && !"".equals(no.trim())) {
			for (int i = 0; i < this.arrayList.size(); i++) {
				if (this.arrayList.get(i) == null) {
					continue;
				}

				if (no.equals(this.arrayList.get(i).getNo())) {
					staff = this.arrayList.remove(i);
					break;
				}
			}
		}
		return staff;
	}

	// 接收访问者对象
	@Override
	public void accept(IVisitor visitor) {

		// 访问自身
		visitor.visit(this);
		// 遍历list列表中的各个元素对象，接收访问者对象
		for (int i = 0; i < this.arrayList.size(); i++) {
			if (this.arrayList.get(i) == null) {
				continue;
			}

			// 接收访问者对象
			this.arrayList.get(i).accept(visitor);
		}
	}
}
