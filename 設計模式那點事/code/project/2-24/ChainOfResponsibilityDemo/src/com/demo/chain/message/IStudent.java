package com.demo.chain.message;

/**
 * 学生接口
 * 
 * @author
 * 
 */
public interface IStudent {
	/**
	 * 获得学生病情状态
	 * 
	 * 0：小事（班长就可以处理）
	 * 
	 * 1：班长处理不了 老师能处理的事
	 * 
	 * 2：老师处理不了 校长能处理的事
	 * 
	 * 
	 */
	public int getState();

	/**
	 * 获得学生请假消息
	 * 
	 * @return
	 */
	public String getRequestMessage();
}
