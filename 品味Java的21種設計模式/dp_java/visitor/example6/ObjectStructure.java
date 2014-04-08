package cn.javass.dp.visitor.example6;
import java.util.*;
/**
 * 对象结构,通常在这里对元素对象进行遍历，让访问者能访问到所有的元素
 */
public class ObjectStructure {
    /**
     * 表示对象结构，可以是一个组合结构
     */
    private Component root = null;
    /**
     * 提供给客户端操作的高层接口
     * @param visitor 客户端需要使用的访问者
     */
    public void handleRequest(Visitor visitor) {
        //让组合对象结构中的根元素，接受访问
        //在组合对象结构中已经实现了元素的遍历
        if (root != null) {
            root.accept(visitor);
        }
    }
    /**
     * 传入组合对象结构
     * @param ele 组合对象结构
     */
    public void setRoot(Component ele) {
        this.root = ele;
    }
}
