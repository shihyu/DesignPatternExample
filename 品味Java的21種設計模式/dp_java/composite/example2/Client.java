package cn.javass.dp.composite.example2;

public class Client {
	public static void main(String[] args) {
		//定义多个Composite对象
		Component root = new Composite();
		Component c1 = new Composite();
		Component c2 = new Composite();
		//定义多个叶子对象
		Component leaf1 = new Leaf();
		Component leaf2 = new Leaf();
		Component leaf3 = new Leaf();
		
		//组和成为树形的对象结构
		root.addChild(c1);
		root.addChild(c2);
		root.addChild(leaf1);
		
		c1.addChild(leaf2);
		c2.addChild(leaf3);
		
		//操作Component对象
		Component o = root.getChildren(1);
		System.out.println(o);
	}
}
