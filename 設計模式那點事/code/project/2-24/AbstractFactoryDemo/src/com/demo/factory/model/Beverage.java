package com.demo.factory.model;

/**
 * 饮料基类
 * 
 * @author maofw
 * 
 */
public abstract class Beverage extends AbstractBaseFood implements IFood
{

	public void printMesage()
	{
		System.out.println("--" + this.kind + "饮料，\t单价：" + this.price + "，\t数量：" + this.num + "，\t合计：" + this.totalPrice());
	}
}
