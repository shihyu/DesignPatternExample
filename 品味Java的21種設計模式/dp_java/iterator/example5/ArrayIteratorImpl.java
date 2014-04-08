package cn.javass.dp.iterator.example5;

import java.util.Iterator;
/**
 * 用来实现访问数组的迭代接口
 */
public class ArrayIteratorImpl implements Iterator {
    /**
     * 用来存放被迭代的聚合对象
     */
    private SalaryManager aggregate = null;
    /**
     * 用来记录当前迭代到的位置索引
     */
    private int index = 0;

    public ArrayIteratorImpl(SalaryManager aggregate) {
        this.aggregate = aggregate;
    }


    public boolean hasNext() {
        //判断是否还有下一个元素
        if (aggregate != null && index < aggregate.size()) {
            return true;
        }

        return false;
    }


    public Object next() {
        Object retObj = null;

        if (hasNext()) {
            retObj = aggregate.get(index);
            //每取走一个值，就把已访问索引加1
            index++;
        }

        return retObj;
    }


    public void remove() {
        //暂时可以不实现
    }
}
