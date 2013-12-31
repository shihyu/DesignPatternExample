package com.prototype.factory;

import com.prototype.pojo.DayLife;

/**
 * 工厂类
 * 
 * @author
 * 
 */
public interface ILifeFactory {
	/**
	 * 生产DayLife对象
	 * 
	 * @return
	 */
	public DayLife getNewInstance();
}
