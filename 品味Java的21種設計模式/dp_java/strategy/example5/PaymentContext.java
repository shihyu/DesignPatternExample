package cn.javass.dp.strategy.example5;
/**
 * 支付工资的上下文，每个人的工资不同，支付方式也不同
 */
public class PaymentContext {
    /**
     * 应被支付工资的人员，简单点，用姓名来代替
     */
    private String userName = null;
    /**
     * 应被支付的工资的金额
     */
    private double money = 0.0;
    /**
     * 支付工资的方式策略的接口
     */
    private PaymentStrategy strategy = null;
    /**
     * 构造方法，传入被支付工资的人员，应支付的金额和具体的支付策略
     * @param userName 被支付工资的人员
     * @param money 应支付的金额
     * @param strategy 具体的支付策略
     */
    public PaymentContext(String userName, double money, PaymentStrategy strategy) {
        this.userName = userName;
        this.money = money;
        this.strategy = strategy;
    }

    /**
     * 立即支付工资
     */
    public void payNow() {
        //使用客户希望的支付策略来支付工资
        this.strategy.pay(this);
    }
    public String getUserName() {
        return userName;
    }

    public double getMoney() {
        return money;
    }
}
