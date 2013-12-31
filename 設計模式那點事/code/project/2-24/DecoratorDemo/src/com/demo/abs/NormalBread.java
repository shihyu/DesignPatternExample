package com.demo.abs;

/**
 * 正常馒头的实现
 * 
 * @author
 * 
 */
public class NormalBread implements IBread {
	// 准备材料
	public void prepair() {
		System.out.println("准备面粉、水以及发酵粉...");
	}

	// 和面
	public void kneadFlour() {
		System.out.println("和面...");
	}

	// 蒸馒头
	public void steamed() {
		System.out.println("蒸馒头...香喷喷的馒头出炉了！");
	}

	/**
	 * 加工馒头方法
	 */
	public void process() {
		// 准备材料
		prepair();
		// 和面
		kneadFlour();
		// 蒸馒头
		steamed();
	}

}
