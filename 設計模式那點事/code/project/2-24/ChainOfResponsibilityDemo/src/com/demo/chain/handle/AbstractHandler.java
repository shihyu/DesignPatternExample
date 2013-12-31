package com.demo.chain.handle;

import com.demo.chain.message.IStudent;

/**
 * 抽象处理者
 * 
 * @author
 * 
 */
public abstract class AbstractHandler implements IHandler {
	// 下一个处理者
	private IHandler handler;
	// 请假级别
	private int state = -1;

	// 构造方法 设置级别
	public AbstractHandler(int state) {
		this.state = state;
	}

	// 处理请求 交由子类负责进行具体的处理
	public abstract void process(IStudent student);

	// 处理请求
	public void handleRequest(IStudent student) {
		// 如果学生对象存在
		if (student != null) {
			if (this.state == student.getState()) {
				// 如果请假级别和当前一致 则当前对象进行处理
				this.process(student);
			} else {

				if (this.handler != null) {
					System.out.println("请求上级领导批复！");
					// 如果当前对象处理不了 则交给下一个处理者进行处理
					this.handler.handleRequest(student);
				}
			}
		}
	}

	// 设置下一个处理者
	public void setHandler(IHandler handler) {
		this.handler = handler;
	}

}
