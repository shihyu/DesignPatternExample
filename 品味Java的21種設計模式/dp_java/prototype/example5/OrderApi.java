package cn.javass.dp.prototype.example5;


/**
 * 订单的接口，声明了可以克隆自身的方法
 */
public interface OrderApi {
    /**
     * 获取订单产品数量
     * @return 订单中产品数量
     */
    public int getOrderProductNum();
    /**
     * 设置订单产品数量
     * @param num 订单产品数量
     */
    public void setOrderProductNum(int num);

}
