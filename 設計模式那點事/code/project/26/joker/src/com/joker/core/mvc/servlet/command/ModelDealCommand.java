package com.joker.core.mvc.servlet.command;

import java.util.Iterator;

import javax.servlet.http.HttpServletRequest;

import com.joker.core.mvc.model.Model;
import com.joker.core.mvc.servlet.context.HttpRequestContext;

/**
 * 模型处理命令
 * 
 * @author
 * 
 */
public class ModelDealCommand extends AbstractCommand
{

	@Override
	protected boolean exec(HttpRequestContext httpRequestContext)
	{
		// 如果返回的视图不为空 则跳转到请求后的页面
		// 首先设置request返回参数内容
		HttpServletRequest request = httpRequestContext.getRequest();
		Model model = httpRequestContext.getModel();
		Iterator<String> iterator = model.itratorKey();
		String key = null;
		while (iterator.hasNext())
		{
			key = iterator.next();
			request.setAttribute(key, model.get(key));
		}
		return true;
	}

}
