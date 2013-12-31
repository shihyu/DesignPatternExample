package com.demo.factory.model;

/**
 * 薯条基类
 * 
 * @author maofw
 * 
 */
public abstract class FrenchFries extends AbstractBaseFood implements IFood
{
	public void printMesage()
	{
		System.out.println("--" + this.kind + "风味薯条，\t单价：" + this.price + "，\t数量：" + this.num + "，\t合计：" + this.totalPrice());
	}
}
