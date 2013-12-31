package com.joker.core.mvc.servlet.command;

import java.io.IOException;

import javax.servlet.ServletException;

import com.joker.core.mvc.servlet.context.HttpRequestContext;

/**
 * 命令 接口
 * 
 * @author
 * 
 */
public interface ICommand
{
	/**
	 * 命令执行方法
	 */
	public void process(HttpRequestContext httpRequestContext) throws ServletException, IOException;

	/**
	 * 设置下一个处理命令
	 * 
	 * @param command
	 */
	public ICommand setNextCommand(ICommand command);
}
