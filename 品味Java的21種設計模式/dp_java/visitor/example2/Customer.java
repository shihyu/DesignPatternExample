package cn.javass.dp.visitor.example2;
/**
 * 各种客户的父类
 */
public abstract class Customer {
    /**
     * 客户编号
     */
    private String customerId;
    /**
     * 客户名称
     */
    private String name;

    public String getCustomerId() {
        return customerId;
    }
    public void setCustomerId(String customerId) {
        this.customerId = customerId;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    /**
     * 客户提出服务请求的方法，示意一下
     */
    public abstract void serviceRequest();
    /**
     * 客户对公司产品的偏好分析，示意一下
     */
    public abstract void predilectionAnalyze();
    /**
     * 客户价值分析，示意一下
     */
    public abstract void worthAnalyze();
}
