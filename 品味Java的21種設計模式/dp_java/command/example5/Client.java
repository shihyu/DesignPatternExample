package cn.javass.dp.command.example5;

public class Client {
	public static void main(String[] args) {
		//只是负责向服务员点菜就好了
		//创建服务员
		Waiter waiter = new Waiter();
		
		//创建命令对象，就是要点的菜
		Command chop = new ChopCommand();
		Command duck = new DuckCommand();
		Command pork = new PorkCommand();
		
		//点菜，就是把这些菜让服务员记录下来
		waiter.orderDish(chop);
		waiter.orderDish(duck);
		waiter.orderDish(pork);
		
		//点菜完毕
		waiter.orderOver();
	}
}