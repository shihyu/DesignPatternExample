package com.demo;

import com.demo.caretaker.Caretaker;
import com.demo.originator.Hero;

/**
 * 客户端主应用程序
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// 创建角色
		Hero hero = new Hero();
		// 创建管理者
		Caretaker caretaker = new Caretaker();
		// 保存挑战前的状态信息
		caretaker.setMemento(hero.createMemento());
		// 只有三次战胜BOSS的机会
		int cnt = 1;
		// 挑战BOSS结果
		int ko = -1;
		while (ko != 1 && cnt <= 3) {
			System.out
					.println("=============== 第" + cnt + "次挑战 ==============");
			// 开始挑战BOSS
			ko = hero.koBoss();
			while (true) {
				if (ko == -1) {
					// 挑战失败 恢复到初始状态 累加挑战次数
					hero.restoreFromMemento(caretaker.getMemento());
					cnt += 1;
					break;
				} else if (ko == 0) {
					// 继续挑战
					ko = hero.koBoss();
				} else if (ko == 1) {
					// 挑战成功！
					break;
				}
			}

		}
	}
}
