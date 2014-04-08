package cn.javass.dp.iterator.example3;

import java.util.*;

/**
 * 用来实现访问Collection集合的迭代接口，为了外部统一访问方式
 */
public class CollectionIteratorImpl implements Iterator {
    /**
     * 用来存放被迭代的聚合对象
     */
    private PayManager aggregate = null;
    /**
     * 用来记录当前迭代到的位置索引
     * -1表示刚开始的时候，迭代器指向聚合对象第一个对象之前
     */
    private int index = -1;

    public CollectionIteratorImpl(PayManager aggregate) {
        this.aggregate = aggregate;
    }

    public void first() {
        index = 0;
    }
    public void next() {
        if (index < this.aggregate.size()) {
            index = index + 1;
        }
    }
    public boolean isDone() {
        if (index == this.aggregate.size()) {
            return true;
        }

        return false;
    }
    public Object currentItem() {
        return this.aggregate.get(index);
    }
}
