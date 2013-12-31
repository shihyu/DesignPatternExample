package com.demo.chain.impl;

import com.demo.chain.handle.AbstractHandler;
import com.demo.chain.message.IStudent;

/**
 * 校长处理者
 * 
 * @author
 * 
 */
public class SchoolMasterHandler extends AbstractHandler {

	public SchoolMasterHandler() {
		super(2);
	}

	// 子类具体处理请求
	@Override
	public void process(IStudent student) {
		System.out.println("校长 批复：" + student.getRequestMessage());
	}
}
