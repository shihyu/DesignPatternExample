package com.demo.buider.base;

import com.demo.buider.model.MobilePackage;

public abstract class AbstractBasePackage
{
	// 手机套餐实例变量
	protected MobilePackage mobilePackage;

	public AbstractBasePackage()
	{
		this.mobilePackage = new MobilePackage();
	}
}
