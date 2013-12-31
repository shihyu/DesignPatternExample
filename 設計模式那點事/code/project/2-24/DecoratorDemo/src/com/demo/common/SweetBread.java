package com.demo.common;

import com.demo.abs.NormalBread;


/**
 * 甜蜜素馒头
 * 
 * @author
 * 
 */
public class SweetBread extends NormalBread {
	// 黑心商贩 开始添加甜蜜素
	public void paint() {
		System.out.println("添加甜蜜素...");
	}

	// 重载父类的和面方法
	@Override
	public void kneadFlour() {
		// 在面粉中加入 甜蜜素 之后才开始和面
		this.paint();
		// 和面
		super.kneadFlour();
	}
}
