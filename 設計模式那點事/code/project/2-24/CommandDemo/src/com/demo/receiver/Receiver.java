package com.demo.receiver;

/**
 * 信件接收者
 * 
 * @author
 * 
 */
public class Receiver implements IReceiver {
	/**
	 * 收件人收到信件读取
	 * 
	 * @param message
	 */
	public void readMail(String message) {
		System.out.println("收件人读取信件：" + message);
	}
}
