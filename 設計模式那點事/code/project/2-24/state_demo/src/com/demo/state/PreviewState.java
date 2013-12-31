package com.demo.state;

import com.demo.context.Context;

/**
 * 预览模式状态
 * 
 * @author
 * 
 */
public class PreviewState implements IState {

	/**
	 * 状态转换
	 */
	public void convertState(Context context, int mode) {
		if (mode == Context.EDIT_MODE) {
			context.changeState(new EditState());
		}
	}

	/**
	 * 预览模式新增
	 */
	public void add(Context context) {
		System.out.println("预览模式不支持【新增】功能！");

	}

	/**
	 * 预览模式修改
	 */
	public void modify(Context context) {
		System.out.println("预览模式不支持【修改】功能！");

	}

	/**
	 * 预览模式保存
	 */
	public void save(Context context) {
		System.out.println("预览模式不支持【保存】功能！");

	}

	/**
	 * 预览模式查看
	 */
	public void view(Context context) {
		System.out.println("预览模式【查看】...");
	}

}
