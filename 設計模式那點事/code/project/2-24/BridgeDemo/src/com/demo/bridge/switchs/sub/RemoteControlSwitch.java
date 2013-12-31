package com.demo.bridge.switchs.sub;

import com.demo.bridge.lights.ILight;
import com.demo.bridge.switchs.BaseSwitch;

/**
 * 遥控开关 继承BaseSwitch 扩展功能
 * 
 * @author
 * 
 */
public class RemoteControlSwitch extends BaseSwitch
{
	// 构造方法
	public RemoteControlSwitch(ILight light)
	{
		super(light);
	}

	/**
	 * 使用遥控开关控制开灯
	 * 
	 * @param operColor
	 *            灯颜色
	 */
	public final void makeRemoteLight(int operColor)
	{
		// 打开开关 接通电流
		this.light.electricConnected();
		// 照明
		this.light.light();
		String color = "";
		switch (operColor)
		{
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
		this.light.electricClosed();
	}
}
