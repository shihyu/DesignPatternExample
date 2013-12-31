package com.demo;

/**
 * 圆形类
 * 
 * @author
 * 
 */
public class Circle implements IShape {

	private int r;

	/**
	 * 构造方法传入半径F
	 * 
	 * @param r
	 */
	public Circle(int r) {
		this.r = r;
	}

	/**
	 * 计算圆的面积
	 */
	@Override
	public double area() {
		return 3.14 * r * r;
	}

	public int getR() {
		return r;
	}

	public void setR(int r) {
		this.r = r;
	}

}
