package com.demo;

/**
 * 具体用户
 * 
 * @author
 * 
 */
public class User implements IUserBaseInfo, IUserRoleInfo {

	// 姓名
	private final String name;
	// 角色
	private final String role;

	/**
	 * 构造方法传入姓名和角色内容
	 * 
	 * @param name
	 *            姓名
	 * @param role
	 *            角色
	 */
	public User(String name, String role) {
		this.name = name;
		this.role = role;
	}

	/**
	 * 获得用户基本信息
	 */
	@Override
	public String getUserBaseInfo() {
		return " - 姓名:" + this.name;

	}

	/**
	 * 获得用户角色信息
	 */
	@Override
	public String getUserRoleInfo() {
		return " - 角色:" + this.role;
	}

}
