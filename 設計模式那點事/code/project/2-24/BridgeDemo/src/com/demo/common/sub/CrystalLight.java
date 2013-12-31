package com.demo.common.sub;

import com.demo.common.AbstractSwitch;

/**
 * 水晶灯
 * 
 * @author
 * 
 */
public class CrystalLight extends AbstractSwitch {
	// 照明方法实现
	@Override
	public void light() {
		System.out.println(" 水晶灯照明！");

	}

	// 关闭开关方法 实现
	@Override
	public void turnOff() {
		System.out.println(" 水晶灯关闭了...");

	}

	// 打开开关方法实现
	@Override
	public void turnOn() {
		System.out.println(" 水晶灯打开了...");

	}

	/**
	 * 使用遥控开关控制开灯
	 * 
	 * @param operColor
	 *            灯颜色
	 */
	public final void makeRemoteLight(int operColor) {
		// 打开开关 接通电流
		this.turnOn();
		// 照明
		this.light();
		String color = "";
		switch (operColor) {
		case 1:
			color = "暖色";
			break;
		case 2:
			color = "蓝色";
			break;
		case 3:
			color = "红色";
			break;
		default:
			color = "白色";
			break;
		}
		System.out.println(" ...现在是" + color + "！");

		// 关闭开关 关闭电流
		this.turnOff();
	}

}
