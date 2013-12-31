package com.demo.interpreter.express;

import com.demo.interpreter.context.Context;

/**
 * For表达式
 * 
 * @author
 * 
 */
public class ForExpression implements IExpressions {

	private final Context context;

	// 存储当前索引key值
	private String variable;
	// 存储循环起始位置
	private int start_index;
	// 存储循环结束位置
	private int end_index;

	private IExpressions expressions;

	/**
	 * 构造方法将待解析的context传入
	 * 
	 * @param context
	 */
	public ForExpression(Context context) {
		this.context = context;
		this.parse(this.context);
	}

	/**
	 * 解析表达式
	 */
	@Override
	public void parse(Context context) {
		// 首先获取当前节点
		this.context.next();
		while (true) {
			// 判断节点
			if (this.context.equalsWithCommand("FROM")) {
				// 设置开始索引内容
				String nextStr = this.context.next();
				try {
					this.start_index = Integer.parseInt(nextStr);
				} catch (Exception e) {
					System.out
							.println("Error: After 'FROM' Expression Exist Error!Please Check the Format Of Expression is Correct!");

					break;
				}
				// 获取下一个节点
				this.context.next();
			} else if (this.context.equalsWithCommand("TO")) {
				// 设置结束索引内容
				String nextStr = this.context.next();
				try {
					this.end_index = Integer.parseInt(nextStr);
				} catch (Exception e) {
					System.out
							.println("Error: After 'TO' Expression Exist Error!Please Check the Format Of Expression is Correct!");
				}
				this.context.next();
				break;
			} else {
				// 设置当前索引变量内容
				if (this.variable == null) {
					this.variable = this.context.getCurrentToken();
				}
				// 获取下一个节点
				this.context.next();
			}
		}
		// 建立列表表达式
		this.expressions = new ListExpression();
		this.expressions.parse(this.context);
	}

	/**
	 * 实现解释方法
	 */
	@Override
	public void interpret() {
		// 建立命令表达式
		for (int x = this.start_index; x <= this.end_index; x++) {
			// 设置变量内容
			this.context.put("" + this.variable, x);
			// 执行解释方法
			this.expressions.interpret();
		}
		// 移除使用的临时变量内容
		this.context.clear("" + this.variable);
	}
}
