package com.demo.strategy;

/**
 * 满1000减200 商品促销策略
 * 
 * @author
 * 
 */
public class ReduceStrategy implements IStrategy {
	/**
	 * 计算实际价格方法
	 * 
	 * @param consumePrice
	 *            消费金额
	 * @return
	 */
	public double realPrice(double consumePrice) {
		if (consumePrice >= 1000) {
			return consumePrice - 200;
		} else {
			return consumePrice;
		}
	}
}
