package com.demo.strategy;

/**
 * 策略接口
 * 
 * @author
 * 
 */
public interface IStrategy {
	/**
	 * 计算实际价格方法
	 * 
	 * @param consumePrice
	 *            消费金额
	 * @return
	 */
	public double realPrice(double consumePrice);
}
