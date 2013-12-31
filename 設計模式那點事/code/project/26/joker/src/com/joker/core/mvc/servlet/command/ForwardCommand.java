package com.joker.core.mvc.servlet.command;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;

import com.joker.core.mvc.context.ApplicationContext;
import com.joker.core.mvc.servlet.context.HttpRequestContext;
import com.joker.core.mvc.view.View;

/**
 * 页面跳转命令
 * 
 * @author
 * 
 */
public class ForwardCommand extends AbstractCommand
{
	@Override
	protected boolean exec(HttpRequestContext httpRequestContext) throws ServletException, IOException
	{
		// 获得上下文环境
		ApplicationContext applicationContext = ApplicationContext.getInstance();
		// 视图
		View view = httpRequestContext.getView();
		// 跳转页面
		ServletContext context = applicationContext.getServletContext();
		RequestDispatcher rd = context.getRequestDispatcher(view.getUrl());
		try
		{
			rd.forward(httpRequestContext.getRequest(), httpRequestContext.getResponse());
		}
		catch (ServletException e)
		{
			throw e;
		}
		return true;
	}
}
