package com;

import com.demo.IUserManager;
import com.demo.User;
import com.demo.UserManager;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		// 创建用户管理者对象
		IUserManager userManager = new UserManager();

		// 创建用户信息
		User user1 = new User("张三", "一般用户");
		User user2 = new User("李四", "普通管理员");
		User user3 = new User("王五", "超级管理员");

		// 显示张三情况
		userManager.showUserBaseInfo(user1);
		userManager.showUserRoleInfo(user1);

		// 显示李四情况
		userManager.showUserBaseInfo(user2);
		userManager.showUserRoleInfo(user2);

		// 显示王五情况
		userManager.showUserBaseInfo(user3);
		userManager.showUserRoleInfo(user3);
	}
}
