package com.demo.interpreter.express;

import com.demo.interpreter.context.Context;

/**
 * 命令表达式
 * 
 * @author
 * 
 */
public class CommandExperssion implements IExpressions {
	private final Context context;
	private IExpressions expressions;

	/**
	 * 构造方法将待解析的context传入
	 * 
	 * @param context
	 */
	public CommandExperssion(Context context) {
		this.context = context;
		this.parse(this.context);
	}

	public void parse(Context context) {

		// 判断当前命令类别 在此只对For和最原始命令进行区分
		if (this.context.equalsWithCommand("FOR")) {
			// 创建For表达式进行解析
			expressions = new ForExpression(this.context);
		} else {
			// 创建原始命令表达式进行内容解析
			expressions = new PrimitiveExpression(this.context);
		}
	}

	/**
	 * 解析内容
	 */
	@Override
	public void interpret() {
		// 解析内容
		this.expressions.interpret();
	}

}
