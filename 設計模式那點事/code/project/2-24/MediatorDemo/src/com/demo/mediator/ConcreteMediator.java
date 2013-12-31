package com.demo.mediator;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import com.demo.colleague.IUser;

/**
 * 中介者实现类
 * 
 * @author
 * 
 */
public class ConcreteMediator implements IMediator {
	private final List<IUser> list = new ArrayList<IUser>();

	/**
	 * 注册用户信息
	 * 
	 * @param user
	 */
	public void regist(IUser user) {
		if (user != null && !list.contains(user)) {
			list.add(user);
		}
	}

	/**
	 * 发送消息
	 * 
	 * @param user
	 *            发送消息人
	 */
	public void notifyAllMessage(IUser user) {
		Iterator<IUser> iterator = list.iterator();
		IUser tmpUser = null;
		while (iterator.hasNext()) {
			tmpUser = iterator.next();
			if (tmpUser != null && !tmpUser.equals(user)) {
				// 排除发送消息用户
				tmpUser.receiveMessage(user.getMessage());
			}
		}
	}
}
