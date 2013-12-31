package com.state;

/**
 * 一般会员状态
 * 
 * @author
 * 
 */
public class OrdinaryVipUserState implements IUserState {

	@Override
	public void exec() {
		System.out.println("一般会员");

	}

}
