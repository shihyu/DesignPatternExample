package com.joker.core.mvc.servlet.command;

import java.io.IOException;

import javax.servlet.ServletException;

import com.joker.core.mvc.servlet.context.HttpRequestContext;

/**
 * 抽象命令
 * 
 * @author
 * 
 */
public abstract class AbstractCommand implements ICommand
{
	// 存储下一个命令对象引用
	protected ICommand command;

	/**
	 * 设置下一个处理命令
	 * 
	 * @param command
	 */
	public ICommand setNextCommand(ICommand command)
	{
		this.command = command;
		return command;
	}

	/**
	 * 由子类具体实现执行方法
	 * 
	 * @param httpRequestContext
	 * @return
	 */
	protected abstract boolean exec(HttpRequestContext httpRequestContext) throws ServletException, IOException;

	/**
	 * 命令执行方法(模板方法)
	 * 
	 * @throws Exception
	 */
	public final void process(HttpRequestContext httpRequestContext) throws ServletException, IOException
	{
		// 执行结果 如果成功则继续往下进行
		boolean b = exec(httpRequestContext);
		if ( b && this.command != null )
		{
			this.command.process(httpRequestContext);
		}
	}
}
