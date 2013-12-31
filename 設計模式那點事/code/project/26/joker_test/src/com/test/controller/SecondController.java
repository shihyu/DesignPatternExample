package com.test.controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.joker.core.mvc.controller.IController;
import com.joker.core.mvc.model.Model;
import com.joker.core.mvc.view.View;

/**
 * 测试Controller 2
 * 
 * @author
 * 
 */
public class SecondController implements IController {

	/**
	 * 处理方法
	 */
	public View execute(HttpServletRequest request,
			HttpServletResponse response, Model model) {
		System.out.println(" ---- in SecondController!");
		model.put("name", request.getParameter("name") == null ? "" : request
				.getParameter("name"));
		model.put("age", request.getParameter("age") == null ? "" : request
				.getParameter("age"));
		model.put("message", " wellcome to the Joker MVC World!");
		return new View("/test/second.jsp");
	}
}
