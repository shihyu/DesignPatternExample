package com.demo.power.v220;

import com.demo.power.AbsBasePower;

/**
 * 220V电源
 * 
 * @author
 * 
 */
public class Power220 extends AbsBasePower implements IPower220
{
	// 构造方法
	public Power220()
	{
		super(220);
	}

	// 220V电源输出
	public void output220v()
	{
		System.out.println("----这是[" + this.getPower() + this.getUnit() + "]电源！...");
	}
}
