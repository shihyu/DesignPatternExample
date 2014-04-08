package cn.javass.dp.visitor.example5;
/**
 * 具体的访问者，实现：输出对象的名称，在组合对象的名称前面添加"节点："，
 * 在叶子对象的名称前面添加"叶子："
*/
public class PrintNameVisitor implements Visitor {
    public void visitComposite(Composite composite) {
        //访问到组合对象的数据
        System.out.println("节点：" + composite.getName());
    }
    public void visitLeaf(Leaf leaf) {
        //访问到叶子对象的数据
        System.out.println("叶子：" + leaf.getName());
    }
}
