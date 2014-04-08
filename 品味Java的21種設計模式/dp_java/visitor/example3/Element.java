package cn.javass.dp.visitor.example3;
/**
 * 被访问的元素的接口
 */
public abstract class Element {
    /**
     * 接受访问者的访问
     * @param visitor 访问者对象
     */
    public abstract void accept(Visitor visitor);
}

