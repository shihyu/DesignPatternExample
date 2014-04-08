package cn.javass.dp.iterator.example8;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/**
 * 用来实现翻页访问聚合元素的迭代接口
 */
public class ArrayIteratorImpl implements AggregationIterator {
    /**
     * 用来存放被迭代的数组
     */
    private PayModel[] pms = null;
    /**
     * 用来记录当前迭代到的位置索引
     */
    private int index = 0;

    public ArrayIteratorImpl(SalaryManager aggregate) {
        this.pms = aggregate.getPays();
    }

    public boolean hasNext() {
        //判断是否还有下一个元素
        if (pms != null && index <= (pms.length - 1)) {
            return true;
        }

        return false;
    }


    public Collection next(int num) {
        Collection col = new ArrayList();
        int count = 0;

        while (hasNext() && count < num) {
            col.add(pms[index]);
            //每取走一个值，就把已访问索引加1
            index++;
            count++;
        }

        return col;
    }


    public boolean hasPrevious() {
        if (pms != null && index > 0) {
            return true;
        }

        return false;
    }


    public Collection previous(int num) {
        Collection col = new ArrayList();
        int count = 0;
        //简单的实现就是把索引退回去num个，然后再取值。
        //但事实上这种实现是有可能多退回去数据的，比如：已经到了最后一页，而且最后一页的数据不够一页的数据，那么退回去num个索引就退多了
        //为了示例的简洁性，这里就不去处理了
        index = index - num;

        while (hasPrevious() && count < num) {
            col.add(pms[index]);
            index ++;
            count++;
        }

        return col;
    }
}
