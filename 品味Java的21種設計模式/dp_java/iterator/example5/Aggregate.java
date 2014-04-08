package cn.javass.dp.iterator.example5;

import java.util.*;
/**
 * 聚合对象的接口，定义创建相应迭代器对象的接口
 */
public abstract class Aggregate {
    /**
     * 工厂方法，创建相应迭代器对象的接口
     * @return 相应迭代器对象的接口
     */
    public abstract Iterator createIterator();
}
