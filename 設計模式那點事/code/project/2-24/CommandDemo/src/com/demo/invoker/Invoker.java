package com.demo.invoker;

import com.demo.command.IPost;

/**
 * 发信人
 * 
 * @author
 * 
 */
public class Invoker {
	// 邮局私有属性
	private IPost post;

	/**
	 * 设置邮局对象实例
	 * 
	 * @param post
	 */
	public void setPost(IPost post) {
		this.post = post;
	}

	/**
	 * 发信人发送信件
	 * 
	 * @param message
	 */
	public void postMail(String message) {
		System.out.println("发信人投递信件给邮局...");
		this.post.sendMail(message);
	}
}
