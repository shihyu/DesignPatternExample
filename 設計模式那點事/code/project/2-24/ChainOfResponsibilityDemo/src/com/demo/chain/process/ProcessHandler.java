package com.demo.chain.process;

import com.demo.chain.handle.IHandler;
import com.demo.chain.impl.SchoolMasterHandler;
import com.demo.chain.impl.SquadLeaderHandler;
import com.demo.chain.impl.TeacherHandler;
import com.demo.chain.message.IStudent;

/**
 * 设置责任链关联
 * 
 * @author
 * 
 */
public class ProcessHandler {

	// 班长处理者
	private final IHandler sqmshandler;
	// 老师处理者
	private final IHandler techhandler;
	// 校长处理者
	private final IHandler scmshandler;

	// 单例模式
	private static ProcessHandler processHandler = new ProcessHandler();

	/**
	 * 构造方法建立请假处理责任链
	 */
	private ProcessHandler() {
		// 创建处理对象
		// 班长
		this.sqmshandler = new SquadLeaderHandler();
		// 老师
		this.techhandler = new TeacherHandler();
		// 校长
		this.scmshandler = new SchoolMasterHandler();
		/**
		 * 建立责任链
		 */
		// 设置班长的下一个处理者：老师
		this.sqmshandler.setHandler(this.techhandler);
		// 设置老师的下一个处理者：校长
		this.techhandler.setHandler(this.scmshandler);

	}

	/**
	 * 获得单例对象实例
	 * 
	 * @return
	 */
	public static ProcessHandler getInstance() {
		return processHandler;
	}

	/**
	 * 发送请假请求
	 * 
	 * @param message
	 */
	public void sendMessage(IStudent student) {
		// 发送给第一个处理者：班长 处理
		this.sqmshandler.handleRequest(student);
	}
}
