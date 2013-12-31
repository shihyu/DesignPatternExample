package com.state;

/**
 * 普通用户状态
 * 
 * @author
 * 
 */
public class CommonUserState implements IUserState {

	@Override
	public void exec() {
		System.out.println("普通用户");

	}

}
