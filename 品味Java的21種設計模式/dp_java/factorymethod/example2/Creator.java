package cn.javass.dp.factorymethod.example2;
/**
 * 创建器，声明工厂方法
 */
public abstract class Creator {
    /**
     * 创建Product的工厂方法
     * @return Product对象
     */
    protected abstract Product factoryMethod();
    /**
     * 示意方法，实现某些功能的方法
     */
    public void someOperation() {
        //通常在这些方法实现中，需要调用工厂方法来获取Product对象
        Product product = factoryMethod();
    }

}

