package com.prototype.pojo;

/**
 * 日常生活类
 * 
 * @author
 * 
 */
public class DayLife implements Cloneable {
	// 构造方法
	public DayLife() {
		System.out.println("-- 执行构造方法了！ --");
	}

	// 起床
	private String getUp;
	// 坐公交
	private String byBus;
	// 下车，买早餐
	private String getFood;
	// 中午小憩
	private String noon;
	// 下午开始工作
	private String afternoonWork;
	// 下班回家
	private String goHome;
	// 晚上休闲
	private String night;

	public String getGetUp() {
		return getUp;
	}

	public void setGetUp(String getUp) {
		this.getUp = getUp;
	}

	public String getByBus() {
		return byBus;
	}

	public void setByBus(String byBus) {
		this.byBus = byBus;
	}

	public String getGetFood() {
		return getFood;
	}

	public void setGetFood(String getFood) {
		this.getFood = getFood;
	}

	public String getNoon() {
		return noon;
	}

	public void setNoon(String noon) {
		this.noon = noon;
	}

	public String getAfternoonWork() {
		return afternoonWork;
	}

	public void setAfternoonWork(String afternoonWork) {
		this.afternoonWork = afternoonWork;
	}

	public String getGoHome() {
		return goHome;
	}

	public void setGoHome(String goHome) {
		this.goHome = goHome;
	}

	public String getNight() {
		return night;
	}

	public void setNight(String night) {
		this.night = night;
	}

	/**
	 * 打印输出日常生活信息
	 */
	public void print() {
		System.out.println(this.getGetUp());
		System.out.println(this.getByBus());
		System.out.println(this.getGetFood());
		System.out.println(this.getNoon());
		System.out.println(this.getAfternoonWork());
		System.out.println(this.getGoHome());
		System.out.println(this.getNight());
	}

	/**
	 * clone方法
	 */
	@Override
	public DayLife clone() {
		try {
			// 调用超类的clone方法（超类？也没有集成任何类啊？哪里来的超类？别忘记了，所有类都是Object的子类哦！）
			return (DayLife) super.clone();
		} catch (Exception e) {
		}
		return null;
	}

}
