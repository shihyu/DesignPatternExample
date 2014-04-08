package cn.javass.dp.visitor.example6;
/**
 * 访问组合对象结构的访问者接口
 */
public interface Visitor {
    /**
     * 访问组合对象，相当于给组合对象添加访问者的功能
     * @param composite 组合对象
     */
    public void visitComposite(Composite composite);
    /**
     * 访问叶子对象，相当于给叶子对象添加访问者的功能
     * @param leaf 叶子对象
     */
    public void visitLeaf(Leaf leaf);
}