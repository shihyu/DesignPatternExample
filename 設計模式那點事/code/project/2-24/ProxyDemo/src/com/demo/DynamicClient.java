package com.demo;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Proxy;

import com.demo.dynamic.ITarget;
import com.demo.dynamic.TargetImpl;

/**
 * 动态代理客户端应用程序
 * 
 * @author
 * 
 */
public class DynamicClient {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 真实处理对象
		InvocationHandler handler = new TargetImpl();

		// 创建代理类事例对象
		ITarget target = (ITarget) Proxy.newProxyInstance(ITarget.class
				.getClassLoader(), new Class[] { ITarget.class }, handler);

		// 操作方法
		target.operation();
	}
}
