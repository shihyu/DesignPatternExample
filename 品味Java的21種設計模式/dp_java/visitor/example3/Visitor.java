package cn.javass.dp.visitor.example3;
/**
 * 访问者接口
 */
public interface Visitor {
    /**
     * 访问元素A，相当于给元素A添加访问者的功能
     * @param elementA 元素A的对象
     */
    public void visitConcreteElementA(ConcreteElementA elementA);
    /**
     * 访问元素B，相当于给元素B添加访问者的功能
     * @param elementB 元素B的对象
     */
    public void visitConcreteElementB(ConcreteElementB elementB);
}

