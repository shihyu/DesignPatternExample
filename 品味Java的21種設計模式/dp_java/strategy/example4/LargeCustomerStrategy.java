package cn.javass.dp.strategy.example4;
/**
 * 具体算法实现，为大客户计算应报的价格
 */
public class LargeCustomerStrategy implements Strategy{
	public double calcPrice(double goodsPrice) {
		System.out.println("对于大客户，统一折扣10%");
		return goodsPrice*(1-0.1);
	}
}
