package cn.javass.dp.composite.example7;
/**
 * 叶子对象
 */
public class Leaf extends Component{
	/**
	 * 叶子对象的名字
	 */
	private String name = "";
	/**
	 * 构造方法，传入叶子对象的名字
	 * @param name 叶子对象的名字
	 */
	public Leaf(String name){
		this.name = name;
	}
	public String getName(){
		return this.name;
	}
	/**
	 * 输出叶子对象的结构，叶子对象没有子对象，也就是输出叶子对象的名字
	 * @param preStr 前缀，主要是按照层级拼接的空格，实现向后缩进
	 */
	public void printStruct(String preStr){
		System.out.println(preStr+"-"+name);
	}
}
