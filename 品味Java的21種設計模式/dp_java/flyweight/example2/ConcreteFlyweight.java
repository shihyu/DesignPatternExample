package cn.javass.dp.flyweight.example2;
/**
 * 享元对象
 */
public class ConcreteFlyweight implements Flyweight{
	/**
	 * 示例，描述内部状态
	 */
	private String intrinsicState;
	/**
	 * 构造方法，传入享元对象的内部状态的数据
	 * @param state 享元对象的内部状态的数据
	 */
	public ConcreteFlyweight(String state){
		this.intrinsicState = state;
	}
	public void operation(String extrinsicState) {
		//具体的功能处理，可能会用到享元内部、外部的状态
	}	
}
