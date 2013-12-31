package com.state;

/**
 * 高级会员状态
 * 
 * @author
 * 
 */
public class AdvancedVipUserState implements IUserState {

	@Override
	public void exec() {
		System.out.println("高级会员");

	}

}
