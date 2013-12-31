package com.demo.interpreter;

import com.demo.interpreter.express.IExpressions;
import com.demo.interpreter.express.ProgramExpression;

/**
 * 主应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// myida语言语句
		String str = "PROGRAM PRINTLN start... FOR i FROM 90 TO 100 PRINTLN i END PRINTLN end... END";
		System.out.println("str:" + str);
		// 创建PROGRAM表达式
		IExpressions expressions = new ProgramExpression(str);
		// 解释执行
		expressions.interpret();
	}
}
