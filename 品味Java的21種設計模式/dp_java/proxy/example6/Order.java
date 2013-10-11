package cn.javass.dp.proxy.example6;
/**
 * 订单对象
 */
public class Order{
	/**
	 * 订单订购的产品名称
	 */
	private String productName;
	/**
	 * 订单订购的数量
	 */
	private int orderNum;
	/**
	 * 创建订单的人员
	 */
	private String orderUser;
	
	/**
	 * 构造方法，传入构建需要的数据
	 * @param productName 订单订购的产品名称
	 * @param orderNum 订单订购的数量
	 * @param orderUser 创建订单的人员
	 */
	public Order(String productName,int orderNum,String orderUser){
		this.productName = productName;
		this.orderNum = orderNum;
		this.orderUser = orderUser;
	}
	
	public String getProductName() {
		return productName;
	}
	public void setProductName(String productName,String user) {
		this.productName = productName;
	}
	public int getOrderNum() {
		return orderNum;
	}
	public void setOrderNum(int orderNum,String user) {
		this.orderNum = orderNum;
	}
	public String getOrderUser() {
		return orderUser;
	}
	public void setOrderUser(String orderUser,String user) {
		this.orderUser = orderUser;
	}
}
