package com.joker.core.mvc.utils;

public class StringUtils
{

	/**
	 * 判断字符串是否为空串
	 * 
	 * @param
	 * @return
	 */
	public static boolean isNull(String s)
	{
		if ( null == s || ("".equals(s.trim())) ) { return true; }
		return false;
	}

	public static boolean isFullNull(String s)
	{
		if ( null == s || ("".equals(s.trim())) || ("null".equalsIgnoreCase(s.trim())) ) { return true; }
		return false;
	}

}
