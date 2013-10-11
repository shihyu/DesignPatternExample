package cn.javass.dp.prototype.example7;
/**
 * 产品对象
 */
public class Product implements Cloneable{
	/**
	 * 产品编号
	 */
	private String productId;	
	/**
	 * 产品名称
	 */
	private String name;
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getProductId() {
		return productId;
	}
	public void setProductId(String productId) {
		this.productId = productId;
	}
	public String toString(){
		return "产品编号="+this.productId+"，产品名称="+this.name;
	}
	public Object clone() {
		Object obj = null;
		try {
			obj = super.clone();
		} catch (CloneNotSupportedException e) {
			e.printStackTrace();
		}
		return obj;
	}	
}
