package com.demo.decorator;

import com.demo.abs.IBread;

/**
 * 抽象装饰者
 * 
 * @author
 * 
 */
public abstract class AbstractBread implements IBread {
	// 存储传入的IBread对象
	private final IBread bread;

	public AbstractBread(IBread bread) {
		this.bread = bread;
	}

	// 准备材料
	public void prepair() {
		this.bread.prepair();
	}

	// 和面
	public void kneadFlour() {
		this.bread.kneadFlour();
	}

	// 蒸馒头
	public void steamed() {
		this.bread.steamed();
	}

	// 加工馒头方法
	public void process() {
		prepair();
		kneadFlour();
		steamed();

	}
}
