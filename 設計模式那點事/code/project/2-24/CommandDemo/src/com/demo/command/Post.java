package com.demo.command;

import com.demo.receiver.IReceiver;

/**
 * 邮局实现类
 * 
 * @author
 * 
 */
public class Post implements IPost {
	// 收信人对象实例
	private final IReceiver receiver;

	/**
	 * 构造方法传入收信人对象实例
	 * 
	 * @param receiver
	 */
	public Post(IReceiver receiver) {
		this.receiver = receiver;
	}

	/**
	 * 邮局发送信件
	 * 
	 * @param message
	 */
	@Override
	public void sendMail(String message) {
		System.out.println("邮局将信件发给收信人...");
		// 邮局发送信件给收信人
		this.receiver.readMail(message);
	}

}
