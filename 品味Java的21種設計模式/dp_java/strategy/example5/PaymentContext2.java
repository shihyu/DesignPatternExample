package cn.javass.dp.strategy.example5;
/**
 * 扩展的支付上下文对象
 */
public class PaymentContext2 extends PaymentContext {
    /**
     * 银行帐号
     */
    private String account = null;
    /**
     * 构造方法，传入被支付工资的人员，应支付的金额和具体的支付策略
     * @param userName 被支付工资的人员
     * @param money 应支付的金额
     * @param account 支付到的银行帐号
     * @param strategy 具体的支付策略
     */
    public PaymentContext2(String userName, double money, String account, PaymentStrategy strategy) {
        super(userName, money, strategy);
        this.account = account;
    }
    public String getAccount() {
        return account;
    }
}
