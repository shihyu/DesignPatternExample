package com.demo;

/**
 * 计算图形面积类
 * 
 * @author
 * 
 */
public class Graphic {

	/**
	 * 计算长方形面积
	 * 
	 * @param rectangle
	 */
	public void calculateAarea(IShape shape) {
		System.out.println("面积：" + shape.area());
	}
}
