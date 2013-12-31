package com.demo.adapter;

import com.demo.power.AbsBasePower;
import com.demo.power.v12.IPower12;

/**
 * 电源适配器 （实现目标对象接口 即：12V电源接口）
 * 
 * @author
 * 
 */
public class AdapterPower12 implements IPower12 {
	// 待转换的对象
	private final AbsBasePower absBasePower;

	// 适配器构造方法 将待转换对象传入
	public AdapterPower12(AbsBasePower absBasePower) {
		this.absBasePower = absBasePower;
	}

	// 实现目标对象方法
	public void output12v() {
		// 获得外部电源值
		float powerFloat = this.absBasePower.getPower();
		// 进行电源转换
		if (powerFloat == 380) {
			// 380V电源转换
			powerFloat = powerFloat / 31.67f;
		} else if (powerFloat == 220) {
			// 220V电源转换
			powerFloat = powerFloat / 18.33f;
		} else if (powerFloat == 110) {
			// 110V电源转换
			powerFloat = powerFloat / 9.17f;
		} else {
			System.out.println("----不能适配电源！...");
			return;
		}

		// 处理转换结果
		powerFloat = (int) (powerFloat * 10) / 10.0f;
		System.out.println("----这是[" + powerFloat + this.absBasePower.getUnit()
				+ "]电源！...");
	}

}
