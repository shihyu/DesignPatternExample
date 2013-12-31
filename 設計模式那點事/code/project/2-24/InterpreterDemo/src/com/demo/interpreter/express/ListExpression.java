package com.demo.interpreter.express;

import java.util.ArrayList;
import java.util.Iterator;

import com.demo.interpreter.context.Context;

/**
 * 列表表达式
 * 
 * @author
 * 
 */
public class ListExpression implements IExpressions {

	private Context context;

	private final ArrayList<IExpressions> list = new ArrayList<IExpressions>();

	/**
	 * 构造方法将待解析的context传入
	 * 
	 * @param context
	 */

	public void parse(Context context) {
		this.context = context;
		// 在ListExpression解析表达式中,循环解释语句中的每一个单词,直到终结符表达式或者异常情况退出
		while (true) {
			if (this.context.getCurrentToken() == null) {
				// 获取当前节点如果为 null 则表示缺少END表达式
				System.out.println("Error: The Experssion Missing 'END'! ");
				break;
			} else if (this.context.equalsWithCommand("END")) {
				this.context.next();
				// 解析正常结束
				break;

			} else {

				// 建立Command 表达式
				IExpressions expressions = new CommandExperssion(this.context);
				// 添加到列表中
				list.add(expressions);
			}
		}
	}

	/**
	 * 实现解释方法
	 */
	@Override
	public void interpret() {
		// 循环list列表中每一个表达式 解释执行
		Iterator<IExpressions> iterator = list.iterator();
		while (iterator.hasNext()) {
			(iterator.next()).interpret();
		}
	}
}
