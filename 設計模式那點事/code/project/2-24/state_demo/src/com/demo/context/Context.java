package com.demo.context;

import com.demo.state.IState;

/**
 * 上下文环境
 * 
 * @author
 * 
 */
public class Context {
	// 预览模式
	public static final int PREVIEW_MODE = 0;
	// 编辑模式
	public static final int EDIT_MODE = 1;
	// 当前状态
	private IState state;

	// 改变状态
	public void changeState(IState state) {
		this.state = state;
	}

	/**
	 * 运行
	 * 
	 * @param mode
	 */
	public void doWork(int mode) {
		System.out.println("-----------------");
		this.state.convertState(this, mode);
		this.state.add(this);
		this.state.save(this);
		this.state.modify(this);
		this.state.view(this);
		System.out.println("-----------------");
	}
}
