package com.joker.core.mvc.utils;

import java.io.File;
import java.net.URL;
import java.util.Iterator;

import org.dom4j.Document;
import org.dom4j.DocumentException;
import org.dom4j.Element;
import org.dom4j.io.SAXReader;

import com.joker.core.mvc.config.JokerConfig;

/**
 * 配置文件解析类
 * 
 * @author
 * 
 */
public class XmlParseUtils
{

	/**
	 * 解析文件生成配置
	 * 
	 * @param filePath
	 * @return
	 */
	public static void parse(JokerConfig jokerConfig, String filePath)
	{
		if ( !StringUtils.isNull(filePath) )
		{
			// 获得配置文件全路径
			URL classPath = XmlParseUtils.class.getClassLoader().getResource("");
			String rootPath = classPath.getFile();
			rootPath = rootPath.substring(1, rootPath.indexOf("WEB-INF"));
			// 文件路径
			File file = new File(rootPath + filePath);

			parse(jokerConfig, file);
		}
	}

	/**
	 * 解析xml文件方法
	 * 
	 * @param file
	 * @return
	 */
	@SuppressWarnings("unchecked")
	public static void parse(JokerConfig jokerConfig, File file)
	{
		SAXReader reader = new SAXReader();
		try
		{
			Document document = reader.read(file);
			if ( document != null )
			{
				Element element = document.getRootElement();
				// 获得所有元素
				Iterator<Element> iterator = element.elementIterator();
				// 循环每一个元素 设置属性内容
				while (iterator.hasNext())
				{
					parse(jokerConfig, iterator.next());
				}
			}
		}
		catch (DocumentException e)
		{
			e.printStackTrace();
		}
	}

	/**
	 * 私有方法解析每一个节点元素 并存储到urlMapping中
	 * 
	 * @param jokerConfig
	 * @param element
	 * @return
	 */
	@SuppressWarnings("unchecked")
	private static void parse(JokerConfig jokerConfig, Element element)
	{
		if ( element != null )
		{
			String url = element.attributeValue("url");
			String classPath = element.attributeValue("class");

			if ( url != null && !"".equals(url) && classPath != null && !"".equals(classPath) )
			{
				// 设置配置信息内容
				jokerConfig.setUrlMapping(url, classPath);
			}
		}
	}
}
