package com.demo;

import com.demo.facade.CookFacade;
import com.demo.facade.ICookFacade;

/**
 * 客户端应用程序
 * 
 * @author
 * 
 */
public class Client {
	public static void main(String[] args) {
		// 开始做糖醋排骨了！
		System.out.println("==== 开始做糖醋排骨...");
		// // 创建糖醋排骨对象实例
		// ISpareribs spareribs = new Spareribs();
		// // 准备材料
		// spareribs.prepair();
		// // 腌制排骨
		// spareribs.preserve();
		// // 炸排骨
		// spareribs.fry();
		// // 调汁
		// spareribs.juice();

		ICookFacade cookFacade = new CookFacade();
		cookFacade.cookSpareribs();
		System.out.println("==== 糖醋排骨制作完成！");
	}
}
