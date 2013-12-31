package com;

import java.util.ArrayList;

public class Test implements Cloneable {

	// 私有属性
	private ArrayList<String> nameList = new ArrayList<String>();

	// 添加内容
	public void add(String s) {
		this.nameList.add(s);
	}

	// 获得ArrayList对象
	public ArrayList<String> get() {
		return this.nameList;
	}

	// clone方法
	@Override
	public Test clone() {
		try {
			Test test = (Test) super.clone();
			test.nameList = (ArrayList<String>) this.nameList.clone();
			return test;
		} catch (CloneNotSupportedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return null;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建test对象
		Test test = new Test();
		// 设置test对象内容
		test.add("aa");
		test.add("bb");

		// 打印显示test中的nameList内容
		System.out.println("test:" + test.get());

		// 克隆test对象生成test2对象
		Test test2 = test.clone();
		// 添加"cc"内容到test2对象中
		test2.add("cc");
		// 打印显示test2中的nameList内容
		System.out.println("test2:" + test2.get());

		// 打印显示test中的nameList内容
		System.out.println("test:" + test.get());

	}
}
