package com.demo.decorator;

import com.demo.abs.IBread;

/**
 * 染色的玉米馒头
 * 
 * @author
 * 
 */
public class CornDecorator extends AbstractBread {

	// 构造方法
	public CornDecorator(IBread bread) {
		super(bread);
	}

	// 黑心商贩 开始染色了
	public void paint() {
		System.out.println("添加柠檬黄的着色剂...");
	}

	// 重载父类的和面方法
	@Override
	public void kneadFlour() {
		// 在面粉中加入 染色剂 之后才开始和面
		this.paint();
		// 和面
		super.kneadFlour();
	}
}
