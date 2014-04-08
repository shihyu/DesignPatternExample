package cn.javass.dp.visitor.example4;

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
     * 接受访问者的访问
     * @param visitor 访问者对象
     */
    public abstract void accept(Visitor visitor);
}
