package cn.javass.dp.iterator.example9;

import java.util.ArrayList;
import java.util.Collection;

/**
 * 用来实现随机翻页访问聚合元素的迭代接口
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

    public boolean hasPrevious() {
        if (pms != null && index > 0) {
            return true;
        }

        return false;
    }

    public Collection getPage(int pageNum, int pageShow) {
        Collection col = new ArrayList();
        //需要在这里先计算需要获取的数据的开始条数和结束条数
        int start = (pageNum - 1) * pageShow;
        int end = start + pageShow - 1;

        //控制start的边界，最小是0
        if (start < 0) {
            start = 0;
        }

        //控制end的边界，最大是数组的最大索引
        if (end > this.pms.length - 1) {
            end = this.pms.length - 1;
        }

        //每次取值都是从头开始循环，所以设置index为0
        index = 0;

        while (hasNext()  && index <= end) {
            if (index >= start) {
                col.add(pms[index]);
            }

            //把已访问索引加1
            index++;
        }

        return col;
    }
}
