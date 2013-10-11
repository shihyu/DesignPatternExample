package cn.javass.dp.command.example7;
/**
 * 后厨的管理类，通过此类让后厨的厨师进行运行状态
 */
public class CookManager {
	/**
	 * 用来控制是否需要创建厨师，如果已经创建过了就不要再执行了
	 */
	private static boolean runFlag = false;
	public static void runCookManager(){
		if(!runFlag){
			runFlag = true;
			//创建三位厨师
			HotCook cook1 = new HotCook("张三");
			HotCook cook2 = new HotCook("李四");
			HotCook cook3 = new HotCook("王五");
			//启动他们的线程
			Thread t1 = new Thread(cook1);
			t1.start();
			Thread t2 = new Thread(cook2);
			t2.start();
			Thread t3 = new Thread(cook3);
			t3.start();
		}
	}
}
