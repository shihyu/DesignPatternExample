package cn.javass.dp.iterator.example2;
import java.util.*;
/**
 * 客户方已有的工资管理对象
 */
public class PayManager {
    /**
     * 聚合对象，这里是Java的集合对象
     */
    private List list = new ArrayList();
    /**
     * 获取工资列表
     * @return 工资列表
     */
    public List getPayList() {
        return list;
    }
    /**
     * 计算工资，其实应该有很多参数，为了演示从简
     */
    public void calcPay() {
        //计算工资，并把工资信息填充到工资列表里面
        //为了测试，做点假数据进去
        PayModel pm1 = new PayModel();
        pm1.setPay(3800);
        pm1.setUserName("张三");

        PayModel pm2 = new PayModel();
        pm2.setPay(5800);
        pm2.setUserName("李四");

        list.add(pm1);
        list.add(pm2);
    }
}