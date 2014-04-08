package cn.javass.dp.decorator.example3;

/**
 * 装饰器的具体实现对象，向组件对象添加职责
 */
public class ConcreteDecoratorB extends Decorator {
    public ConcreteDecoratorB(Component component) {
        super(component);
    }
    /**
     * 需要添加的职责
     */
    private void addedBehavior() {
        //需要添加的职责实现
    }
    public void operation() {
        //调用父类的方法，可以在调用前后执行一些附加动作
        super.operation();
        addedBehavior();
    }
}

