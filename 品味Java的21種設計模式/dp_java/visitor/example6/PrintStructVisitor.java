package cn.javass.dp.visitor.example6;

/**
 * 具体的访问者，实现：输出组合对象自身的结构
*/
public class PrintStructVisitor implements Visitor {
    /**
     * 用来累计记录对象需要向后退的格
     */
    private String preStr = "";
    public void visitComposite(Composite composite) {
        //先把自己输出去
        System.out.println(preStr + "+" + composite.getName());

        //如果还包含有子组件，那么就输出这些子组件对象
        if (composite.getChildComponents() != null) {
            //然后添加一个空格，表示向后缩进一个空格
            preStr += " ";

            //输出当前对象的子对象了
            for (Component c : composite.getChildComponents()) {
                //递归输出每个子对象
                c.accept(this);
            }

            //把循环子对象所多加入的一个退格给去掉
            preStr = preStr.substring(0, preStr.length() - 1);
        }
    }
    public void visitLeaf(Leaf leaf) {
        //访问到叶子对象的数据
        System.out.println(preStr + "-" + leaf.getName());
    }
}
