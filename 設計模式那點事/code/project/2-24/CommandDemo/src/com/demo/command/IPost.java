package com.demo.command;

/**
 * 邮局接口
 * 
 * @author
 * 
 */
public interface IPost {
	/**
	 * 邮局发送信件
	 * 
	 * @param message
	 */
	public void sendMail(String message);

}
