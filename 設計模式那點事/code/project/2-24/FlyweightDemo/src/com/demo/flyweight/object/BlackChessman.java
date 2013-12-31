package com.demo.flyweight.object;

public class BlackChessman extends AbstractChessman {

	/**
	 * 构造方法 初始化黑棋子
	 */
	public BlackChessman() {
		super("●");
		System.out.println("--BlackChessman Construction Exec!!!");
	}

	// 点坐标设置
	@Override
	public void point(int x, int y) {
		this.x = x;
		this.y = y;
		// 显示棋子内容
		show();
	}
}
