package cn.javass.dp.prototype.example6;
/**
 * 声明一个克隆产品自身的接口
 *
 */
public interface ProductPrototype {
    /**
     * 克隆产品自身的方法
     * @return 一个从自身克隆出来的产品对象
     */
    public ProductPrototype cloneProduct();
}
