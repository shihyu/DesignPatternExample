package com;

import com.demo.IUserManage;
import com.demo.UserManage;

/**
 * 客户端应用
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建用户管理对象
		IUserManage userManage = new UserManage(2);
		// 处理权限
		userManage.process();
	}

}
