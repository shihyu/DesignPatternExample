package com.demo.colleague;

/**
 * 用户接口
 * 
 * @author
 * 
 */
public interface IUser
{
	/**
	 * 接收消息
	 * 
	 * @param message
	 *            消息
	 */
	public void receiveMessage(String message);

	/**
	 * 发送消息
	 * 
	 * @param message
	 *            消息
	 */
	public void sendMessage(String message);

	/**
	 * 获得发送的消息内容
	 * 
	 * @return
	 */
	public String getMessage();
}
