package com.demo;

import com.state.AdvancedVipUserState;
import com.state.CommonUserState;
import com.state.IUserState;
import com.state.OrdinaryVipUserState;

/**
 * 用户管理实现类
 * 
 * @author
 */
public class UserManage implements IUserManage {
	private final int auth;

	private IUserState userState;

	public UserManage(int auth) {
		this.auth = auth;
	}

	/**
	 * 改变状态方法
	 * 
	 * @param userState
	 */
	public void changeUserState(IUserState userState) {
		this.userState = userState;
	}

	/**
	 * 处理逻辑
	 */
	public void process() {
		if (auth == 1) {
			// 普通用户处理逻辑
			changeUserState(new CommonUserState());
		} else if (auth == 2) {
			// 一般会员处理逻辑
			changeUserState(new OrdinaryVipUserState());
		} else if (auth == 3) {
			// 高级会员处理逻辑
			changeUserState(new AdvancedVipUserState());
		} else {
			changeUserState(null);
			// 权限错误
			System.out.println("权限错误");
		}

		if (this.userState != null) {
			this.userState.exec();
		}
	}
}
