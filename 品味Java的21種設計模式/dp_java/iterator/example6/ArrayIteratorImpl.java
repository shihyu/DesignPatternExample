package cn.javass.dp.iterator.example6;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/**
 * 用来实现访问数组的迭代接口,加入了迭代策略
 */
public class ArrayIteratorImpl implements Iterator {
    /**
     * 用来存放被迭代的数组
     */
    private PayModel[] pms = null;
    /**
     * 用来记录当前迭代到的位置索引
     */
    private int index = 0;

    public ArrayIteratorImpl(SalaryManager aggregate) {
        //在这里先对聚合对象的数据进行过滤，比如工资必须在3000以下
        Collection<PayModel> tempCol = new ArrayList<PayModel>();

        for (PayModel pm : aggregate.getPays()) {
            if (pm.getPay() < 3000) {
                tempCol.add(pm);
            }
        }

        //然后把符合要求的数据存放到用来迭代的数组
        this.pms = new PayModel[tempCol.size()];
        int i = 0;

        for (PayModel pm : tempCol) {
            this.pms[i] = pm;
            i++;
        }
    }


    public boolean hasNext() {
        //判断是否还有下一个元素
        if (pms != null && index <= (pms.length - 1)) {
            return true;
        }

        return false;
    }


    public Object next() {
        Object retObj = null;

        if (hasNext()) {
            retObj = pms[index];
            //每取走一个值，就把已访问索引加1
            index++;
        }

        //在这里对要返回的数据进行过滤，比如不让查看工资数据
        ((PayModel)retObj).setPay(0.0);

        return retObj;
    }


    public void remove() {
        //暂时可以不实现
    }
}
