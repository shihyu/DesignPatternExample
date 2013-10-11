package cn.javass.dp.flyweight.example4;

import java.util.*;
/**
 * 享元工厂，通常实现成为单例
 */
public class FlyweightFactory {
	private static FlyweightFactory factory = new FlyweightFactory();
	private FlyweightFactory(){
		
	}
	public static FlyweightFactory getInstance(){
		return factory;
	}
	/**
	 * 缓存多个flyweight对象
	 */
	private Map<String,Flyweight> fsMap = new HashMap<String,Flyweight>();
	/**
	 * 获取key对应的享元对象
	 * @param key 获取享元对象的key
	 * @return key对应的享元对象
	 */
	public Flyweight getFlyweight(String key) {
		Flyweight f = fsMap.get(key);
		//换一个更简单点的写法
		if(f==null){
			f = new AuthorizationFlyweight(key);
			fsMap.put(key,f);
		}
		return f;
	}
}
