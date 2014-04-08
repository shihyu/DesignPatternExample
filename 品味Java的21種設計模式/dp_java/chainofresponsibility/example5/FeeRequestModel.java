package cn.javass.dp.chainofresponsibility.example5;
/**
 * 封装跟聚餐费用申请业务相关的请求数据
 */
public class FeeRequestModel extends RequestModel {
    /**
     * 约定具体的业务类型
     */
    public final static String FEE_TYPE = "fee";
    public FeeRequestModel() {
        super(FEE_TYPE);
    }
    /**
     * 申请人
     */
    private String user;
    /**
     * 申请金额
     */
    private double fee;
    public String getUser() {
        return user;
    }
    public void setUser(String user) {
        this.user = user;
    }
    public double getFee() {
        return fee;
    }
    public void setFee(double fee) {
        this.fee = fee;
    }
}
