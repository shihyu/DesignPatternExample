package com.demo.strategy;

/**
 * 打八折商品促销策略
 * 
 * @author
 * 
 */
public class RebateStrategy implements IStrategy {
	private final double rate;

	/**
	 * 构造方法设置打折率
	 */
	public RebateStrategy() {
		this.rate = 0.8;
	}

	/**
	 * 计算实际价格方法
	 * 
	 * @param consumePrice
	 *            消费金额
	 * @return
	 */
	public double realPrice(double consumePrice) {
		return consumePrice * this.rate;
	}

}
