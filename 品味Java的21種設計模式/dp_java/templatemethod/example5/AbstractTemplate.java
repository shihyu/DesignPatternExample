package cn.javass.dp.templatemethod.example5;
/**
 * 一个较为完整的模版定义示例
 */
public abstract class AbstractTemplate {
	/**
	 * 模板方法，定义算法骨架
	 */
	public final void templateMethod(){
		//第一步
		this.operation1();
		//第二步		
		this.operation2();
		//第三步
		this.doPrimitiveOperation1();
		//第四步
		this.doPrimitiveOperation2();
		//第五步
		this.hookOperation1();
	}
	/**
	 * 具体操作1，算法中的步骤，固定实现，而且子类不需要访问
	 */
	private void operation1(){
		//在这里具体的实现
	}
	/**
	 * 具体操作2，算法中的步骤，固定实现，子类可能需要访问，
	 * 当然也可以定义成public的，不可以被覆盖，因此是final的
	 */
	protected final void operation2(){
		//在这里具体的实现
	}
	/**
	 * 具体的AbstractClass操作，子类的公共功能，
	 * 但通常不是具体的算法步骤
	 */
	protected void commonOperation(){
		//在这里具体的实现
	}
	/**
	 * 原语操作1，算法中的必要步骤，父类无法确定如何真正实现，需要子类来实现
	 */
	protected abstract void doPrimitiveOperation1();
	/**
	 * 原语操作2，算法中的必要步骤，父类无法确定如何真正实现，需要子类来实现
	 */
	protected abstract void doPrimitiveOperation2();
	/**
	 * 钩子操作，算法中的步骤，不一定需要，提供缺省实现
	 * 由子类选择并具体实现
	 */
	protected void hookOperation1(){
		//在这里提供缺省的实现
	}
	/**
	 * 工厂方法，创建某个对象，这里用Object代替了，在算法实现中可能需要
	 * @return 创建的某个算法实现需要的对象
	 */
	protected abstract Object createOneObject();
}
