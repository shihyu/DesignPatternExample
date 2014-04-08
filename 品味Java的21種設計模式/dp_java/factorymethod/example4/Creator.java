package cn.javass.dp.factorymethod.example4;
/**
 * 客户端使用Creator对象的情况下，Creator的基本实现结构
 */
public abstract class Creator {
    /**
     * 工厂方法，一般不对外
     * @return 创建的产品对象
     */
    protected abstract Product factoryMethod();
    /**
     * 提供给外部使用的方法，
     * 客户端一般使用Creator提供的这些方法来完成所需要的功能
     */
    public void someOperation() {
        //在这里使用工厂方法
        Product p = factoryMethod();
    }
}
