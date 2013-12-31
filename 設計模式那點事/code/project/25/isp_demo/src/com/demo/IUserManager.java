package com.demo;

/**
 * 用户管理接口
 * 
 * @author
 * 
 */
public interface IUserManager {
	/**
	 * 展示用户基本信息
	 * 
	 * @param userBaseInfo
	 */
	public void showUserBaseInfo(IUserBaseInfo userBaseInfo);

	/**
	 * 展示用户角色信息
	 * 
	 * @param userRoleInfo
	 */
	public void showUserRoleInfo(IUserRoleInfo userRoleInfo);
}
