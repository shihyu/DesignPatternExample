package com.demo.power;

/**
 * 电源基类
 * 
 * @author
 * 
 */
public abstract class AbsBasePower
{
	// 电压值
	private float power;
	// 单位
	private String unit = "V";

	// 构造方法
	public AbsBasePower(float power)
	{
		this.power = power;
	}

	public float getPower()
	{
		return power;
	}

	public void setPower(float power)
	{
		this.power = power;
	}

	public String getUnit()
	{
		return unit;
	}

	public void setUnit(String unit)
	{
		this.unit = unit;
	}
}
