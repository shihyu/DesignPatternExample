package com.demo.buider.itf;

import com.demo.buider.base.AbstractBasePackage;
import com.demo.buider.model.MobilePackage;

/**
 * 套餐1
 * 
 * @author maofw
 * 
 */
public class MobileBuilderImpl1 extends AbstractBasePackage implements IMobileBuilder
{
	// 建造手机套餐的话费
	public void buildMoney()
	{
		this.mobilePackage.setMoney(20.0f);
	}

	// 建造手机套餐的彩玲
	public void buildMusic()
	{
		this.mobilePackage.setMusic("天使");

	}

	// 建造手机套餐的短信
	public void buildShortInfo()
	{
		this.mobilePackage.setShortInfo(400);

	}

	// 返回建造的手机套餐对象
	public MobilePackage getMobilePackage()
	{

		return this.mobilePackage;
	}

}
