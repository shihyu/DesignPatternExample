package cn.javass.dp.interpreter.example5;

import java.util.ArrayList;
import java.util.List;

import org.w3c.dom.Element;
/**
 * 以多个元素作为终结符的解释处理对象
 */
public class ElementsTerminalExpression  extends ReadXmlExpression{
	/**
	 * 元素的名称
	 */
	private String eleName = "";
	public ElementsTerminalExpression(String name){
		this.eleName = name;
	}
	
	public String[] interpret(Context c) {
		//先取出上下文里的父级元素
		List<Element> pEles = c.getPreEles();
		//获取当前的多个元素
		List<Element> nowEles = new ArrayList<Element>();
		
		for(Element ele : pEles){
			nowEles.addAll(c.getNowEles(ele, eleName));
		}

		//然后需要去获取这些元素的值
		String[] ss = new String[nowEles.size()];
		for(int i=0;i<ss.length;i++){
			ss[i] = nowEles.get(i).getFirstChild().getNodeValue();
		}
		return ss;
	}

}
