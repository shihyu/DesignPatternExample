package com.demo.receiver;

/**
 * 信件接收者接口
 * 
 * @author
 * 
 */
public interface IReceiver {
	/**
	 * 收件人收到信件读取
	 * 
	 * @param message
	 */
	public void readMail(String message);
}
