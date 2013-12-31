package com.demo.dynamic;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;

/**
 * 实际的处理类
 * 
 * @author
 * 
 */
public class TargetImpl implements InvocationHandler {

	// 实现方法
	@Override
	public Object invoke(Object proxy, Method method, Object[] args)
			throws Throwable {

		System.out.println("--method:" + method.getName());
		System.out.println("--动态代理类实现！！！");
		return null;
	}

}
