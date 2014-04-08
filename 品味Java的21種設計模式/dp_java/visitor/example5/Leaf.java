package cn.javass.dp.visitor.example5;
/**
 * 叶子对象，相当于访问者模式的具体Element实现对象
 */
public class Leaf extends Component {
    public void accept(Visitor visitor) {
        //回调访问者对象的相应方法
        visitor.visitLeaf(this);
    }
    /**
     * 叶子对象的名字
     */
    private String name = "";
    /**
     * 构造方法，传入叶子对象的名字
     * @param name 叶子对象的名字
     */
    public Leaf(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
}
