package com.demo;

/**
 * 用户管理类
 * 
 * @author
 * 
 */
public class UserManager implements IUserManager {

	/**
	 * 展示用户基本信息
	 * 
	 * @param userBaseInfo
	 */
	public void showUserBaseInfo(IUserBaseInfo userBaseInfo) {
		System.out.print(userBaseInfo.getUserBaseInfo());
	}

	/**
	 * 展示用户角色信息
	 * 
	 * @param userRoleInfo
	 */
	public void showUserRoleInfo(IUserRoleInfo userRoleInfo) {
		System.out.println(userRoleInfo.getUserRoleInfo());
	}
}
