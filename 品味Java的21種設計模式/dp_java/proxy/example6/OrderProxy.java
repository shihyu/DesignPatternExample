package cn.javass.dp.proxy.example6;

/**
 * 订单的代理对象
 */
public class OrderProxy extends Order {

    public OrderProxy(String productName, int orderNum, String orderUser) {
        super(productName, orderNum, orderUser);
    }

    public void setProductName(String productName, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            super.setProductName(productName, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的产品名称。");
        }
    }
    public void setOrderNum(int orderNum, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            super.setOrderNum(orderNum, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的订购数量。");
        }
    }
    public void setOrderUser(String orderUser, String user) {
        //控制访问权限，只有创建订单的人员才能够修改
        if (user != null && user.equals(this.getOrderUser())) {
            super.setOrderUser(orderUser, user);
        } else {
            System.out.println("对不起" + user + "，您无权修改订单中的订购人。");
        }
    }

    public String toString() {
        return "productName=" + this.getProductName() + ",orderNum=" + this.getOrderNum() + ",orderUser=" + this.getOrderUser();
    }
}
