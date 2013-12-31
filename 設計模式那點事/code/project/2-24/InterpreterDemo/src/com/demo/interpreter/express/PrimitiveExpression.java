package com.demo.interpreter.express;

import com.demo.interpreter.context.Context;

/**
 * 最基础的表达式
 * 
 * @author
 * 
 */
public class PrimitiveExpression implements IExpressions {
	private Context context;
	// 节点名称
	private String tokenName;
	// 文本内容
	private String text;

	/**
	 * 构造方法将待解析的context传入
	 * 
	 * @param context
	 */
	public PrimitiveExpression(Context context) {
		this.parse(context);
	}

	@Override
	public void parse(Context context) {
		this.context = context;
		this.tokenName = this.context.getCurrentToken();
		this.context.next();
		if ("PRINTLN".equals(this.tokenName)) {
			this.text = this.context.getCurrentToken();
			this.context.next();
		}
	}

	/**
	 * 实现解释方法
	 */
	@Override
	public void interpret() {
		// 首先获取当前节点内容
		if ("PRINTLN".equals(tokenName)) {
			// 获得内容信息
			// 打印内容
			System.out.println(this.context.getTokenContent(this.text));
		}
	}

}
