package com.demo;

import com.demo.colleague.IUser;
import com.demo.colleague.UserA;
import com.demo.colleague.UserB;
import com.demo.colleague.UserC;
import com.demo.mediator.ConcreteMediator;
import com.demo.mediator.IMediator;

/**
 * 
 * 主应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建聊天室（中介者）
		IMediator mediator = new ConcreteMediator();
		// 创建用户信息
		IUser userA = new UserA(mediator, "张三");
		IUser userB = new UserB(mediator, "李四");
		IUser userC = new UserC(mediator, "王五");

		System.out
				.println("============================================================");
		userA.sendMessage("大家好，我叫张三！初来乍到，请多多关照！");
		System.out
				.println("============================================================\n");

		System.out
				.println("============================================================");
		userB.sendMessage("你好，我叫李四，欢迎加入！");
		System.out
				.println("============================================================\n");

		System.out
				.println("============================================================");
		userC.sendMessage("我是王五，欢迎欢迎！");
		System.out
				.println("============================================================\n");

	}
}
