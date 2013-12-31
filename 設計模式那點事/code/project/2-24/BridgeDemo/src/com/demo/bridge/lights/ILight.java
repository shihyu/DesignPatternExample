package com.demo.bridge.lights;

/**
 * 电灯接口
 * 
 * @author
 * 
 */
public interface ILight
{
	// 接通电流
	public void electricConnected();

	// 照明
	public void light();

	// 电流关闭
	public void electricClosed();

}
