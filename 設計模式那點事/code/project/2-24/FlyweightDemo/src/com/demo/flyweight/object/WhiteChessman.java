package com.demo.flyweight.object;

public class WhiteChessman extends AbstractChessman {
	/**
	 * 构造方法 初始化白棋子
	 */
	public WhiteChessman() {
		super("○");
		System.out.println("--WhiteChessman Construction Exec!!!");
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
