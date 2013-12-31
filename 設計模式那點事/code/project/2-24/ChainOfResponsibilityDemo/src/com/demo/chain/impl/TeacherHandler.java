package com.demo.chain.impl;

import com.demo.chain.handle.AbstractHandler;
import com.demo.chain.message.IStudent;

/**
 * 老师处理者
 * 
 * @author
 * 
 */
public class TeacherHandler extends AbstractHandler {

	public TeacherHandler() {
		super(1);
	}

	// 子类具体处理请求
	@Override
	public void process(IStudent student) {
		System.out.println("老师 批复：" + student.getRequestMessage());
	}

}
