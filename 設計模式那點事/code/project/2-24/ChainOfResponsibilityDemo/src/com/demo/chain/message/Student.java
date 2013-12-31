package com.demo.chain.message;

/**
 * 学生实现类
 * 
 * @author
 * 
 */
public class Student implements IStudent {

	// 病情的大小状态
	private int state = -1;
	// 请假消息
	private final String message;

	public Student(int state, String message) {
		this.state = state;
		this.message = message;
	}

	/**
	 * 获得学生请假状态
	 * 
	 * 0：小事（班长就可以处理）
	 * 
	 * 1：班长处理不了 老师能处理的事
	 * 
	 * 2：老师处理不了 校长能处理的事
	 * 
	 * 
	 */
	public int getState() {
		return this.state;
	}

	/**
	 * 获得学生请假消息
	 * 
	 * @return
	 */
	public String getRequestMessage() {
		return this.message;
	}

}
