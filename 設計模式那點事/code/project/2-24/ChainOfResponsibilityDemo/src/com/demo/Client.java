package com.demo;

import java.util.Random;

import com.demo.chain.message.IStudent;
import com.demo.chain.message.Student;
import com.demo.chain.process.ProcessHandler;

/**
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

		// 获得外观对象
		ProcessHandler processHandler = ProcessHandler.getInstance();

		// 创建随机数对象 用来随机产生学生对象
		Random random = new Random();
		for (int i = 0; i < 3; i++) {
			// 获得随机数
			int radom = random.nextInt(3);
			IStudent student = new Student(radom, "学生" + i + "生病了，要请假！");
			System.out.println("#################################");
			// 处理消息
			processHandler.sendMessage(student);
			System.out.println("#################################\n");
		}

	}
}
