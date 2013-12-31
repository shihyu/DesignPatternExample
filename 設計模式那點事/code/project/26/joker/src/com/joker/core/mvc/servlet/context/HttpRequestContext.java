package com.joker.core.mvc.servlet.context;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.joker.core.mvc.model.Model;
import com.joker.core.mvc.view.View;

/**
 * 请求上下文
 * 
 * @author
 * 
 */
public class HttpRequestContext {
	// request对象实例
	private HttpServletRequest request;
	// response对象实例
	private HttpServletResponse response;
	// 请求uri
	private String requestUri;
	// 数据模型对象实例
	private Model model;
	// 视图对象实例
	private View view;

	public Model getModel() {
		return model;
	}

	public void setModel(Model model) {
		this.model = model;
	}

	public View getView() {
		return view;
	}

	public void setView(View view) {
		this.view = view;
	}

	public String getRequestUri() {
		return requestUri;
	}

	public void setRequestUri(String requestUri) {
		this.requestUri = requestUri;
	}

	public String getParamer(String name) {
		return this.request.getParameter(name);
	}

	public HttpServletRequest getRequest() {
		return request;
	}

	public void setRequest(HttpServletRequest request) {
		this.request = request;
	}

	public HttpServletResponse getResponse() {
		return response;
	}

	public void setResponse(HttpServletResponse response) {
		this.response = response;
	}

}
