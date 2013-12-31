package com.demo.originator;

import java.util.Random;

import com.demo.memento.INarrowMemento;

/**
 * 挑战者
 * 
 * @author
 * 
 */
public class Hero {
	// 血液值
	private int blood;
	// 武力值
	private int sword;

	// 随机数
	private final Random random = new Random();

	// 构造方法初始化 内容
	public Hero() {
		this.blood = 100;
		this.sword = 100;
	}

	// 创建备忘录保存内容
	public INarrowMemento createMemento() {
		System.out.println("创建备忘录...");
		return new Memento(this.blood, this.sword);
	}

	// 恢复备忘录内容
	public void restoreFromMemento(INarrowMemento memento) {
		System.out.println("恢复备忘录中的状态...");
		if (memento != null) {
			Memento memento2 = (Memento) memento;
			this.blood = memento2.getBlood();
			this.sword = memento2.getSword();
		}
	}

	/**
	 * 挑战BOSS
	 */
	public int koBoss() {
		// 当血液值<=0 时 挑战失败 假设战胜BOSS的概率为2%
		// 判断时候还有血液值
		if (this.blood <= 0 || this.sword <= 0) {
			System.out.println(this.toString());
			System.out.println("挑战BOSS失败！");
			return -1;
		} else {
			// 获得随机数
			double win = Math.random();
			if (win <= 0.02) {
				System.out.println(this.toString());
				System.out.println("恭喜你，挑战BOSS成功！");
				return 1;
			} else {
				System.out.println(this.toString());
				System.out.println("继续攻击BOSS...");
				// 随机数减少血液值和武力值 继续KO
				int blood_sub = random.nextInt(10);
				int sword_sub = random.nextInt(10);
				this.blood -= blood_sub;
				this.sword -= sword_sub;
				return 0;
			}
		}
	}

	@Override
	public String toString() {
		return "当前血液值：" + this.blood + " - 当前武力值：" + this.sword;
	}

	/**
	 * 备忘录(整个类都是私有的，只有发起者才能访问)
	 * 
	 * @author
	 * 
	 */
	private class Memento implements INarrowMemento {
		// 血液值
		private final int blood;
		// 武力值
		private final int sword;

		// 构造方法初始化 内容
		private Memento(int blood, int sword) {
			this.blood = blood;
			this.sword = sword;
		}

		private int getBlood() {
			return blood;
		}

		private int getSword() {
			return sword;
		}

	}

}
