package com.demo.buider.itf;

import com.demo.buider.model.MobilePackage;

/**
 * 手机套餐Builder
 * 
 * @author
 * 
 */
public interface IMobileBuilder
{
	// 建造手机套餐的话费
	public void buildMoney();

	// 建造手机套餐的短信
	public void buildShortInfo();

	// 建造手机套餐的彩玲
	public void buildMusic();

	// 返回建造的手机套餐对象
	public MobilePackage getMobilePackage();
}
