package cn.javass.dp.prototype.example6;
/**
 * 产品对象
 */
public class Product implements ProductPrototype {
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
    public String toString() {
        return "产品编号=" + this.productId + "，产品名称=" + this.name;
    }
    public ProductPrototype cloneProduct() {
        //创建一个新的订单，然后把本实例的数据复制过去
        Product product = new Product();
        product.setProductId(this.productId);
        product.setName(this.name);
        return product;
    }
}
