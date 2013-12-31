package com.demo.interpreter.express;

import com.demo.interpreter.context.Context;

/**
 * program 表达式
 * 
 * @author
 * 
 */
public class ProgramExpression implements IExpressions {

	// 上下文环境
	private final Context context;
	// 当前命令
	private final static String COMMAND = "PROGRAM";

	// 存储下一个表达式引用
	private IExpressions expressions;

	/**
	 * 构造方法将待解析的内容传入
	 * 
	 * @param text
	 */
	public ProgramExpression(String text) {
		this.context = new Context(text);
		this.parse(this.context);
	}

	@Override
	public void parse(Context context) {
		// 获取第一个命令节点
		this.context.next();
	}

	/**
	 * 实现解释方法
	 */
	@Override
	public void interpret() {

		// 判断是否是以PROGRAM 开始
		if (!this.context.equalsWithCommand(COMMAND)) {
			System.out.println("The '" + COMMAND + "' is Excepted For Start!");
		} else {
			// 是以PROGRAM 开始
			this.context.next();
			this.expressions = new ListExpression();
			this.expressions.parse(this.context);
			// ListExpression表达式开始解析
			this.expressions.interpret();
		}
	}

}
