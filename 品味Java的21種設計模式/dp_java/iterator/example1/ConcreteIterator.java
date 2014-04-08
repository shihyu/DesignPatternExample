package cn.javass.dp.iterator.example1;

/**
 * 具体迭代器实现对象，示意的是聚合对象为数组的迭代器
 * 不同的聚合对象相应的迭代器实现是不一样的
 */
public class ConcreteIterator implements Iterator {
    /**
     * 持有被迭代的具体的聚合对象
     */
    private ConcreteAggregate aggregate;
    /**
     * 内部索引，记录当前迭代到的索引位置。
     * -1表示刚开始的时候，迭代器指向聚合对象第一个对象之前
     */
    private int index = -1;
    /**
     * 构造方法，传入被迭代的具体的聚合对象
     * @param aggregate 被迭代的具体的聚合对象
     */
    public ConcreteIterator(ConcreteAggregate aggregate) {
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