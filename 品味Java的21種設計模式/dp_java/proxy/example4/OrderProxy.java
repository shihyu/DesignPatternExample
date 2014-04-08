package cn.javass.dp.proxy.example4;

/**
 * 订单的代理对象
 */
public class OrderProxy implements OrderApi {
    /**
     * 持有被代理的具体的目标对象
     */
    private Order order = null;
    /**
     * 构造方法，传入被代理的具体的目标对象
     * @param realSubject 被代理的具体的目标对象
     */
    public OrderProxy(Order realSubject) {
        this.order = realSubject;
    }
    public void setProductName(String productName, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            order.setProductName(productName, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的产品名称。");
        }
    }
    public void setOrderNum(int orderNum, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            order.setOrderNum(orderNum, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的订购数量。");
        }
    }
    public void setOrderUser(String orderUser, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            order.setOrderUser(orderUser, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的订购人。");
        }
    }
    public int getOrderNum() {
        return this.order.getOrderNum();
    }
    public String getOrderUser() {
        return this.order.getOrderUser();
    }
    public String getProductName() {
        return this.order.getProductName();
    }
    public String toString() {
        return "productName=" + this.getProductName() + ",orderNum=" + this.getOrderNum() + ",orderUser=" + this.getOrderUser();
    }
}
