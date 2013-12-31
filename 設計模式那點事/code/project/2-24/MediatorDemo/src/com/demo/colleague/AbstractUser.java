package com.demo.colleague;

import com.demo.mediator.IMediator;

/**
 * 抽象用户信息
 * 
 * @author
 * 
 */
public abstract class AbstractUser implements IUser
{
	// 中介者
	protected IMediator mediator;
	// 姓名
	protected String name;
	// 消息
	protected String message;

	public AbstractUser(IMediator mediator, String name)
	{
		this.mediator = mediator;
		this.name = name;

	}

	/**
	 * 发送消息
	 * 
	 * @param message
	 *            消息
	 */
	public void sendMessage(String message)
	{
		this.message = message;
		System.out.println(this.name + " 说:" + this.message);
		mediator.notifyAllMessage(this);
	}

	public String getMessage()
	{
		return message;
	}
}
