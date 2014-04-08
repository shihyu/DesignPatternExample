package cn.javass.dp.prototype.example7;
/**
 * 个人订单对象
 */
public class PersonalOrder implements Cloneable , OrderApi {
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

    public Object clone() {
        PersonalOrder obj = null;

        try {
            obj = (PersonalOrder)super.clone();
            //这一句话不可少
            //          obj.setProduct((Product)this.product.clone());
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }

        return obj;
    }

}
