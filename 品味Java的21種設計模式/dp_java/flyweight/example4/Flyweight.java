package cn.javass.dp.flyweight.example4;

import java.util.Collection;

/***
 * 描述授权数据的享元接口
 */
public interface Flyweight {
	/**
	 * 判断传入的安全实体和权限，是否和享元对象内部状态匹配
	 * @param securityEntity 安全实体
	 * @param permit 权限
	 * @return true表示匹配，false表示不匹配
	 */
	public boolean match(String securityEntity,String permit);
	/**
	 * 为flyweight添加子flyweight对象
	 * @param f 被添加的子flyweight对象
	 */
	public void add(Flyweight f);	
}