package cn.javass.dp.flyweight.example5;
import java.util.*;

public class Client {
    public static void main(String[] args) throws Exception {
        SecurityMgr mgr = SecurityMgr.getInstance();
        boolean f1 = mgr.hasPermit("张三", "薪资数据", "查看");
        boolean f2 = mgr.hasPermit("李四", "薪资数据", "查看");
        boolean f3 = mgr.hasPermit("李四", "薪资数据", "修改");

        //      Thread.sleep(4000);
        for (int i = 0; i < 3; i++) {
            mgr.hasPermit("张三" + i, "薪资数据", "查看");
        }

        //特别提醒：这里查看的引用次数，不是指测试使用的次数
        //指的是SecurityMgr的queryByUser方法通过享元工厂去获取享元对象的次数
        System.out.println("薪资数据,查看 被引用了" + FlyweightFactory.getInstance().getUseTimes("薪资数据,查看") + "次");
        System.out.println("薪资数据,修改 被引用了" + FlyweightFactory.getInstance().getUseTimes("薪资数据,修改") + "次");
        System.out.println("人员列表,查看 被引用了" + FlyweightFactory.getInstance().getUseTimes("人员列表,查看") + "次");
    }
}
