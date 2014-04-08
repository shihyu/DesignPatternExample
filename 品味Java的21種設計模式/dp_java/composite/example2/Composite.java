package cn.javass.dp.composite.example2;

import java.util.*;

/**
 * 组合对象，通常需要存储子对象，定义有子部件的部件行为，
 * 并实现在Component里面定义的与子部件有关的操作
 */
public class Composite extends Component {
    /**
     * 用来存储组合对象中包含的子组件对象
     */
    private List<Component> childComponents = null;

    /**
     * 示意方法，通常在里面需要实现递归的调用
     */
    public void someOperation() {
        if (childComponents != null) {
            for (Component c : childComponents) {
                //递归的进行子组件相应方法的调用
                c.someOperation();
            }
        }
    }
    public void addChild(Component child) {
        //延迟初始化
        if (childComponents == null) {
            childComponents = new ArrayList<Component>();
        }

        childComponents.add(child);
    }

    public void removeChild(Component child) {
        if (childComponents != null) {
            childComponents.remove(child);
        }
    }

    public Component getChildren(int index) {
        if (childComponents != null) {
            if (index >= 0 && index < childComponents.size()) {
                return childComponents.get(index);
            }
        }

        return null;
    }
}

