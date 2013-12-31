package com.demo.strategy;

/**
 * 满200，高于200部分打八折 商品促销策略
 * 
 * @author
 * 
 */
public class PromotionalStrategy implements IStrategy {
	/**
	 * 计算实际价格方法
	 * 
	 * @param consumePrice
	 *            消费金额
	 * @return
	 */
	public double realPrice(double consumePrice) {
		if (consumePrice > 200) {
			return 200 + (consumePrice - 200) * 0.8;
		} else {
			return consumePrice;
		}

	}
}
