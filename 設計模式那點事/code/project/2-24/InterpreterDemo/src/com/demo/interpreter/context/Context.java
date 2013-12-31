package com.demo.interpreter.context;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.StringTokenizer;

/**
 * 上下文环境
 * 
 * @author
 * 
 */
public class Context {
	// 待解析的文本内容
	private final StringTokenizer stringTokenizer;
	// 当前命令
	private String currentToken;
	// 用来存储动态变化信息内容
	private final Map<String, Object> map = new HashMap<String, Object>();

	/**
	 * 构造方法设置解析内容
	 * 
	 * @param text
	 */
	public Context(String text) {
		// 使用空格分隔待解析文本内容
		this.stringTokenizer = new StringTokenizer(text);
	}

	/**
	 * 解析文本
	 */
	public String next() {
		if (this.stringTokenizer.hasMoreTokens()) {
			currentToken = this.stringTokenizer.nextToken();
		} else {
			currentToken = null;
		}
		return currentToken;
	}

	/**
	 * 判断命令是否正确
	 * 
	 * @param command
	 * @return
	 */
	public boolean equalsWithCommand(String command) {
		if (command == null || !command.equals(this.currentToken)) {
			return false;
		}
		return true;
	}

	/**
	 * 获得当前命令内容
	 * 
	 * @return
	 */
	public String getCurrentToken() {
		return this.currentToken;
	}

	/**
	 * 获得节点的内容
	 * 
	 * @return
	 */
	public String getTokenContent(String text) {

		String str = text;
		if (str != null) { // 替换map中的动态变化内容后返回 Iterator<String>
			// 替换map中的动态变化内容后返回
			Iterator<String> iterator = this.map.keySet().iterator();

			while (iterator.hasNext()) {
				String key = iterator.next();
				Object obj = map.get(key);
				str = str.replaceAll(key, obj.toString());
			}
		}

		return str;
	}

	public void put(String key, Object value) {
		this.map.put(key, value);
	}

	public void clear(String key) {
		this.map.remove(key);
	}

}
