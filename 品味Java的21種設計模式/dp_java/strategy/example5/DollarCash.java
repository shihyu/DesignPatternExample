package cn.javass.dp.strategy.example5;
/**
 * 美元现金支付
 */
public class DollarCash implements PaymentStrategy{
	
	public void pay(PaymentContext ctx) {
		System.out.println("现在给"+ctx.getUserName()+"美元现金支付"+ctx.getMoney()+"元");
	}
}