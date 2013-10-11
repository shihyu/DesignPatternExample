package cn.javass.dp.simplefactory.example2;
/**
 * 客户端，使用Api接口
 */
public class Client {
	public static void main(String[] args) {
		//通过简单工厂来获取接口对象
		Api api = Factory.createApi(1);
		api.operation("正在使用简单工厂");
	}
}
