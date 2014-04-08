package cn.javass.dp.abstractfactory.example2;
/**
 * 具体的工厂实现对象，实现创建具体的产品对象的操作
 */
public class ConcreteFactory1 implements AbstractFactory {

    public AbstractProductA createProductA() {
        return new ProductA1();
    }
    public AbstractProductB createProductB() {
        return new ProductB1();
    }

}

