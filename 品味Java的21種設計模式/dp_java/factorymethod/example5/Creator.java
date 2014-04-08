package cn.javass.dp.factorymethod.example5;
/**
 * 客户端使用Creator来创建客户端需要的对象的情况下，Creator的基本实现结构
 */
public abstract class Creator {
    /**
     * 工厂方法，一般不对外，创建一个部件对象
     * @return 创建的产品对象，一般是另一个产品对象的部件
     */
    protected abstract Product1 factoryMethod1();
    /**
     * 工厂方法，一般不对外，创建一个部件对象
     * @return 创建的产品对象，一般是另一个产品对象的部件
     */
    protected abstract Product2 factoryMethod2();
    /**
     * 创建客户端需要的对象，客户端主要使用产品对象来完成所需要的功能
     * @return 客户端需要的对象
     */
    public Product createProduct() {
        //在这里使用工厂方法，得到客户端所需对象的部件对象
        Product1 p1 = factoryMethod1();
        Product2 p2 = factoryMethod2();
        //工厂方法创建的对象是创建客户端对象所需要的
        Product p = new ConcreteProduct();
        p.setProduct1(p1);
        p.setProduct2(p2);

        return p;
    }
}
