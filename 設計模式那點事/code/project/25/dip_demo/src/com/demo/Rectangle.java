package com.demo;

/**
 * 长方形
 * 
 * @author
 * 
 */
public class Rectangle implements IShape {
	// 宽
	private int width;
	// 高
	private int height;

	/**
	 * 构造方法传入宽和高
	 * 
	 * @param width
	 * @param height
	 */
	public Rectangle(int width, int height) {
		this.width = width;
		this.height = height;
	}

	/**
	 * 计算长方形面积
	 * 
	 * @return
	 */
	public double area() {
		return this.width * this.height;
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}

	public void setWidth(int width) {
		this.width = width;
	}

	public void setHeight(int height) {
		this.height = height;
	}
}
