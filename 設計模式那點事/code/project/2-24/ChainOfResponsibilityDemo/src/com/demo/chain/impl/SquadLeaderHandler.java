package com.demo.chain.impl;

import com.demo.chain.handle.AbstractHandler;
import com.demo.chain.message.IStudent;

/**
 * 班长处理者
 * 
 * @author
 * 
 */
public class SquadLeaderHandler extends AbstractHandler {

	public SquadLeaderHandler() {
		super(0);
	}

	// 子类具体处理请求
	@Override
	public void process(IStudent student) {
		System.out.println("班长 批复：" + student.getRequestMessage());
	}

}
