package com.demo.person;

/**
 * 人员具体实现类
 * 
 * @author
 * 
 */
public class Person implements IPerson
{
	// 姓名
	private String name;
	// 年龄
	private int age;
	// 性别(1:男性 0：女性)
	private int sex;

	/**
	 * 构造方法设置属性内容
	 * 
	 * @param name
	 * @param age
	 * @param sex
	 */
	public Person(String name, int age, int sex)
	{
		this.name = name;
		this.age = age;
		this.sex = sex;
	}

	/**
	 * 获得人员信息
	 * 
	 * @return
	 */
	public String getPersonInfo()
	{
		return "姓名:" + this.name + " - 年龄:" + this.age + " - 性别:" + (this.sex == 1 ? "男" : (this.sex == 0 ? "女" : ""));
	}

}
