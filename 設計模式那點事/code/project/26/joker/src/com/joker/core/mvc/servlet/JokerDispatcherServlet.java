package com.joker.core.mvc.servlet;

import java.io.IOException;

import javax.servlet.ServletException;

import com.joker.core.mvc.config.JokerConfig;
import com.joker.core.mvc.context.ApplicationContext;
import com.joker.core.mvc.servlet.command.DispatcherCommand;
import com.joker.core.mvc.servlet.command.ForwardCommand;
import com.joker.core.mvc.servlet.command.ICommand;
import com.joker.core.mvc.servlet.command.ModelDealCommand;
import com.joker.core.mvc.servlet.context.HttpRequestContext;

/**
 * 具体分发处理器Servlet
 * 
 * @author
 * 
 */
@SuppressWarnings("serial")
public class JokerDispatcherServlet extends BaseDispatcherServlet {

	// 处理命令对象实例
	private ICommand command;

	/**
	 * 具体处理过程
	 */
	@Override
	protected void process(HttpRequestContext httpRequestContext)
			throws ServletException, IOException {
		// 获得ApplicationContext上下文
		ApplicationContext applicationContext = ApplicationContext
				.getInstance();
		// 获得配置信息
		JokerConfig jokerConfig = applicationContext.getJokerConfig();
		if (jokerConfig != null) {
			// 设置输出编码格式
			httpRequestContext.getResponse().setCharacterEncoding(
					jokerConfig.getEncode());
			httpRequestContext.getRequest().setCharacterEncoding(
					jokerConfig.getEncode());
		}
		if (command != null) {
			try {
				command.process(httpRequestContext);
			} catch (ServletException e) {
				this.logger.error("Process failed", e);
				throw e;
			} catch (IOException e) {
				this.logger.error("Process failed", e);
				throw e;
			}
		} else {
			if (logger.isInfoEnabled()) {
				logger.info("DispatcherCommand is not exist!");
			}
		}
	}

	/**
	 * 子类初始化方法
	 */
	@Override
	protected void initServlet() throws ServletException {
		// 设置处理命令
		command = new DispatcherCommand();
		// 依次设置命令节点：模型处理命令、页面跳转命令
		command.setNextCommand(new ModelDealCommand()).setNextCommand(
				new ForwardCommand());
		if (logger.isInfoEnabled()) {
			logger
					.info("JokerDispatcherServlet Initializing Dispatcher Chain Success !");
		}
	}
}
