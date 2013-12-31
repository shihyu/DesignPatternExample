package com.demo.power.v12;

import com.demo.power.AbsBasePower;

/**
 * 正常的12V电源
 * 
 * @author
 * 
 */
public class Power12 extends AbsBasePower implements IPower12 {

	// 12V电源构造方法
	public Power12() {
		super(12);
	}

	// 12V电源输出
	public void output12v() {
		System.out.println("----这是[" + this.getPower() + this.getUnit()
				+ "]电源！...");

	}

}
