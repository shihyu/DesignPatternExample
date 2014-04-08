package cn.javass.dp.prototype.example6;
/**
 * 个人订单对象
 */
public class PersonalOrder implements OrderApi {
    /**
     * 订购人员姓名
     */
    private String customerName;
    /**
     * 产品对象
     */
    private Product product = null;
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
    public String getCustomerName() {
        return customerName;
    }
    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }
    public Product getProduct() {
        return product;
    }
    public void setProduct(Product product) {
        this.product = product;
    }

    public String toString() {
        //简单点输出
        return "订购产品是=" + this.product.getName() + "，订购数量为=" + this.orderProductNum;
    }

    public OrderApi cloneOrder() {
        //创建一个新的订单，然后把本实例的数据复制过去
        PersonalOrder order = new PersonalOrder();
        order.setCustomerName(this.customerName);
        order.setOrderProductNum(this.orderProductNum);
        //对于对象类型的数据，深度克隆的时候需要继续调用这个对象的克隆方法
        order.setProduct((Product)this.product.cloneProduct());
        return order;
    }
}
