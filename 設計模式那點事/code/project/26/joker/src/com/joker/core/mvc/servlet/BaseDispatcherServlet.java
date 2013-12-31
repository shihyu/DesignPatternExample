package com.joker.core.mvc.servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;

import com.joker.core.mvc.config.JokerConfig;
import com.joker.core.mvc.context.ApplicationContext;
import com.joker.core.mvc.model.Model;
import com.joker.core.mvc.servlet.context.HttpRequestContext;
import com.joker.core.mvc.utils.StringUtils;

/**
 * 分发器基类
 * 
 * @author
 * 
 */
public abstract class BaseDispatcherServlet extends HttpServlet
{
	protected final Log logger = LogFactory.getLog(getClass());

	/**
	 * 处理流程 抽象方法需要子类实现
	 * 
	 * @param request
	 * @param response
	 * @throws IOException
	 */
	protected abstract void process(HttpRequestContext httpRequestContext) throws ServletException, IOException;

	/**
	 * 
	 * 处理逻辑方法
	 * 
	 * @param request
	 * @param response
	 * @param model
	 * @throws IOException
	 */

	@SuppressWarnings("unchecked")
	protected void doService(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
	{
		// 获得请求地址
		String reqUri = request.getRequestURI();
		// 根路径地址
		String contextUri = request.getContextPath();
		// 具体的请求地址
		reqUri = reqUri.substring(contextUri.length());

		// 创建请求Context
		HttpRequestContext requestContext = new HttpRequestContext();
		requestContext.setRequest(request);
		requestContext.setResponse(response);
		requestContext.setRequestUri(reqUri);

		// 创建模型
		requestContext.setModel(Model.getModelInstance());

		// 请求process方法
		process(requestContext);
	}

	// get方法
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
	{
		doService(request, response);
	}

	// post方法
	public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
	{
		doService(request, response);
	}

	/**
	 * 子类可以重载该方法进行初始化自定义加载
	 * 
	 * @throws ServletException
	 */
	protected void initServlet() throws ServletException
	{
	}

	/**
	 * 重载父类方法
	 */
	public final void init() throws ServletException
	{
		getServletContext().log("Initializing Joker BaseDispatcherServlet '" + getServletName() + "'");
		if ( this.logger.isInfoEnabled() )
		{
			this.logger.info("BaseDispatcherServlet '" + getServletName() + "': initialization started");
		}
		/**
		 * 设置url映射和classPath内容
		 */

		long startTime = System.currentTimeMillis();
		// 获得配置文件
		String configFileName = getServletConfig().getInitParameter("config");
		// 编码
		String encode = getServletConfig().getInitParameter("encode");
		// 解析文件生成配置信息
		JokerConfig jokerConfig = new JokerConfig(configFileName);
		if ( !StringUtils.isNull(encode) )
		{
			jokerConfig.setEncode(encode);
		}
		jokerConfig.parse();
		// 获得上下文环境
		ApplicationContext applicationContext = ApplicationContext.getInstance();
		// 处理配置文件内容，检验是否配置正确
		// 加载全局配置文件
		applicationContext.loadJokerConfig(jokerConfig);
		// 设置servlet Context
		applicationContext.setServletContext(getServletContext());

		// 子类初始化加载
		initServlet();

		if ( this.logger.isInfoEnabled() )
		{
			long elapsedTime = System.currentTimeMillis() - startTime;
			this.logger.info("BaseDispatcherServlet '" + getServletName() + "': initialization completed in " + elapsedTime + " ms");
		}
	}
}
