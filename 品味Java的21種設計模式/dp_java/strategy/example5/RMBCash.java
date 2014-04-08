package cn.javass.dp.strategy.example5;
/**
 * 人民币现金支付
 */
public class RMBCash implements PaymentStrategy {

    public void pay(PaymentContext ctx) {
        System.out.println("现在给" + ctx.getUserName() + "人民币现金支付" + ctx.getMoney() + "元");
    }

}
