package com.demo.chain.handle;

import com.demo.chain.message.IStudent;

/**
 * 抽象处理者接口
 * 
 * @author
 * 
 */
public interface IHandler {
	// 处理请求
	public void handleRequest(IStudent student);

	// 设置下一个处理者
	public void setHandler(IHandler handler);
}
