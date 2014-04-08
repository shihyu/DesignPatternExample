package cn.javass.dp.prototype.example3;
/**
 * 企业订单对象
 */
public class EnterpriseOrder implements OrderApi {
    /**
     * 企业名称
     */
    private String enterpriseName;
    /**
     * 产品编号
     */
    private String productId;
    /**
     * 订单产品数量
     */
    private int orderProductNum = 0;
    public int getOrderProductNum() {
        return this.orderProductNum;
    }
    public void setOrderProductNum(int num) {
        this.orderProductNum = num;
    }
    public String getEnterpriseName() {
        return enterpriseName;
    }
    public void setEnterpriseName(String enterpriseName) {
        this.enterpriseName = enterpriseName;
    }
    public String getProductId() {
        return productId;
    }
    public void setProductId(String productId) {
        this.productId = productId;
    }
    public String toString() {
        return "本企业订单的订购企业是=" + this.enterpriseName + "，订购产品是=" + this.productId + "，订购数量为=" + this.orderProductNum;
    }
    public OrderApi cloneOrder() {
        //创建一个新的订单，然后把本实例的数据复制过去
        EnterpriseOrder order = new EnterpriseOrder();
        order.setEnterpriseName(this.enterpriseName);
        order.setProductId(this.productId);
        order.setOrderProductNum(this.orderProductNum);

        return order;
    }

}
