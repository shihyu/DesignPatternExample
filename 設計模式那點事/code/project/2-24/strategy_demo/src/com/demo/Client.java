package com.demo;

import java.util.Random;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建上下问环境对象实例
		// Context context = new Context();
		// 随机数对象
		Random random = new Random();
		for (int i = 0; i < 10; i++) {
			// 产生随机数的方式判断使用何种促销策略
			int x = random.nextInt(3);
			// 消费价格也是由随机数产生的（不能为0）
			double consumePrice = 0;
			while ((consumePrice = random.nextInt(2000)) == 0) {
			}

			double realPrice = consumePrice;
			switch (x) {
			case 0:
				// 打八折商品
				// context.setStrategy(new RebateStrategy());
				realPrice = consumePrice * 0.8;
				break;
			case 1:
				// 满200，高于200部分打八折 商品
				// context.setStrategy(new PromotionalStrategy());
				if (consumePrice > 200) {
					realPrice = 200 + (consumePrice - 200) * 0.8;
				}
				break;
			case 2:
				// 满1000减200 商品
				// context.setStrategy(new ReduceStrategy());
				if (consumePrice >= 1000) {
					realPrice = consumePrice - 200;
				}
				break;
			}
			System.out.print("【"
					+ (x == 0 ? "打八折" : (x == 1 ? "高于200部分打八折"
							: (x == 2 ? "满1000减200" : ""))) + "】商品：");

			System.out.println("原价：" + consumePrice + " - 优惠后价格：" + realPrice);
		}
	}
}
