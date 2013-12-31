package com.demo.state;

import com.demo.context.Context;

/**
 * 编辑模式状态
 * 
 * @author
 * 
 */
public class EditState implements IState {
	/**
	 * 状态转换
	 */
	public void convertState(Context context, int mode) {
		if (mode == Context.PREVIEW_MODE) {
			context.changeState(new PreviewState());
		}

	}

	/**
	 * 编辑模式新增
	 */
	public void add(Context context) {
		System.out.println("编辑模式【新增】...");

	}

	/**
	 * 编辑模式修改
	 */
	public void modify(Context context) {
		System.out.println("编辑模式【修改】...");

	}

	/**
	 * 编辑模式保存
	 */
	public void save(Context context) {
		System.out.println("编辑模式【保存】...");

	}

	/**
	 * 编辑模式查看
	 */
	public void view(Context context) {
		System.out.println("编辑模式【查看】...");

	}

}
