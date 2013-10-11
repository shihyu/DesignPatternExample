package cn.javass.dp.iterator.example5;

import java.util.Collection;
import java.util.Iterator;

public class Client {
	public static void main(String[] args) {
		//访问集团的工资列表
		PayManager payManager= new PayManager();
		//先计算再获取
		payManager.calcPay();
		System.out.println("集团工资列表：");
		test(payManager.createIterator());
		//访问新收购公司的工资列表
		SalaryManager salaryManager = new SalaryManager();
		//先计算再获取
		salaryManager.calcSalary();
		System.out.println("新收购的公司工资列表：");
		test(salaryManager.createIterator());
	}
	/**
	 * 测试通过访问聚合对象的迭代器，是否能正常访问聚合对象
	 * @param it 聚合对象的迭代器
	 */
	private static void test(Iterator it){
		while(it.hasNext()){
			PayModel pm = (PayModel)it.next();
			System.out.println(pm);
		}
	}
}
