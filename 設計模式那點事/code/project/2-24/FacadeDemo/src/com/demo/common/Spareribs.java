package com.demo.common;

/**
 * 
 * 糖醋排骨实现类
 * 
 * @author
 * 
 */
public class Spareribs implements ISpareribs {
	// 准备材料
	@Override
	public void prepair() {
		System.out.println("1.准备猪排骨500克，葱末、姜末、酱油、花生油、白糖、醋、料酒、盐各适量...");
	}

	// 腌制排骨
	@Override
	public void preserve() {
		System.out.println("2.将排骨洗净剁成3厘米长段，用开水汆一下，捞出放盆内，加入盐、酱油腌入味...");
	}

	// 炸排骨
	@Override
	public void fry() {
		System.out.println("3.炒锅注油烧至六成热，下排骨炸至淡黄色捞出；油温加热至八成，再下锅炸至金黄色捞出...");
	}

	// 调汁
	@Override
	public void juice() {
		System.out
				.println("4.炒锅留少许油烧热，下入葱花，姜末爆香，加入适量清水、酱油、醋、白糖、料酒、倒入排骨，烧开后用慢火煨至汤汁浓，排骨熟，淋上熟油，出锅即可!");

	}

}
