package cn.javass.dp.visitor.example4;
import java.util.*;
/**
 * 对象结构,通常在这里对元素对象进行遍历，让访问者能访问到所有的元素
 */
public class ObjectStructure {
    /**
     * 要操作的客户集合
     */
    private Collection<Customer> col = new ArrayList<Customer>();
    /**
     * 提供给客户端操作的高层接口，具体的功能由客户端传入的访问者决定
     * @param visitor 客户端需要使用的访问者
     */
    public void handleRequest(Visitor visitor) {
        //循环对象结构中的元素，接受访问
        for (Customer cm : col) {
            cm.accept(visitor);
        }
    }
    /**
     * 组建对象结构，向对象结构中添加元素。
     * 不同的对象结构有不同的构建方式
     * @param ele 加入到对象结构的元素
     */
    public void addElement(Customer ele) {
        this.col.add(ele);
    }
}
