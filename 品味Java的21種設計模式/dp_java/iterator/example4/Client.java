package cn.javass.dp.iterator.example4;
import java.util.*;
public class Client {
    public static void main(String[] args) {
        //访问集团的工资列表
        PayManager payManager = new PayManager();
        //先计算再获取
        payManager.calcPay();
        Collection<PayModel> payList = payManager.getPayList();
        System.out.println("集团工资列表：");

        //      Iterator it = payList.iterator();
        //      while(it.hasNext()){
        //          PayModel pm = (PayModel)it.next();
        //          System.out.println(pm);
        //      }
        for (PayModel pm : payList) {
            System.out.println(pm);
        }

        //访问新收购公司的工资列表
        SalaryManager salaryManager = new SalaryManager();
        //先计算再获取
        salaryManager.calcSalary();
        PayModel[] pms = salaryManager.getPays();
        System.out.println("新收购的公司工资列表：");

        //      for(int i=0;i<pms.length;i++){
        //          System.out.println(pms[i]);
        //      }
        for (PayModel pm : pms) {
            System.out.println(pm);
        }
    }
}
