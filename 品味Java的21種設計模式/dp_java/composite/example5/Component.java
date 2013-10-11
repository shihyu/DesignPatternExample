package cn.javass.dp.composite.example5;

import java.util.Iterator;
/**
 * 抽象的组件对象，安全性的实现方式
 */
public abstract class Component {
	/**
	 * 输出组件自身的名称
	 */
	public abstract void printStruct(String preStr);
}

