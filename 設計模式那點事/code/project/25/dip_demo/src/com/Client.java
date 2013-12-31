package com;

import com.demo.Circle;
import com.demo.Graphic;
import com.demo.Rectangle;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建图形处理对象
		Graphic graphic = new Graphic();
		// 创建长方形对象
		Rectangle rectangle = new Rectangle(3, 4);
		// 处理
		graphic.calculateAarea(rectangle);

		// 创建圆形对象
		Circle circle = new Circle(10);
		// 处理圆形
		graphic.calculateAarea(circle);
	}

}
