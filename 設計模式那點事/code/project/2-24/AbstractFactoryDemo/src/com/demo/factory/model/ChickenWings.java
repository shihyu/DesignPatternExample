package com.demo.factory.model;

/**
 * 鸡翅基类
 * 
 * @author maofw
 * 
 */
public abstract class ChickenWings extends AbstractBaseFood implements IFood
{

	public void printMesage()
	{
		System.out.println("--" + this.kind + "风味鸡翅，\t单价：" + this.price + "，\t数量：" + this.num + "，\t合计：" + this.totalPrice());
	}

}
