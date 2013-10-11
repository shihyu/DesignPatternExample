package cn.javass.dp.composite.example7;
import java.util.*;

/**
 * 组合对象，可以包含其它组合对象或者叶子对象
 */
public class Composite extends Component{
	public String getName(){
		return this.name;
	}
	public void addChild(Component child) {
		//延迟初始化
		if (childComponents == null) {
			childComponents = new ArrayList<Component>();
		}
		childComponents.add(child);		
		
		//先判断组件路径是否为空，如果为空，说明本组件是根组件
		if(this.getComponentPath()==null || this.getComponentPath().trim().length()==0){
			//把本组件的name设置到组件路径中
			this.setComponentPath(this.name);
		}
		//判断要加入的组件在路径上是否出现过
		//先判断是否是根组件
		if(this.getComponentPath().startsWith(child.getName()+".")){
			//说明是根组件，重复添加了
			throw new java.lang.IllegalArgumentException("在本通路上，组件 '"+child.getName()+"' 已被添加过了");
		}else{
			if(this.getComponentPath().indexOf("."+child.getName()) < 0){
				//表示没有出现过,那么可以加入
				//计算组件的路径
				String componentPath = this.getComponentPath()+"."+child.getName();
				//设置子组件的路径
				child.setComponentPath(componentPath);
			}else{
				throw new java.lang.IllegalArgumentException("在本通路上，组件 '"+child.getName()+"' 已被添加过了");
			}		
		}
	}
	
	/*---------------以下是原有的实现，没有变化------------------*/		
	/**
	 * 用来存储组合对象中包含的子组件对象
	 */
	private List<Component> childComponents = null;
	/**
	 * 组合对象的名字
	 */
	private String name = "";
	/**
	 * 构造方法，传入组合对象的名字
	 * @param name 组合对象的名字
	 */
	public Composite(String name){
		this.name = name;
	}
	/**
	 * 输出组合对象自身的结构
	 * @param preStr 前缀，主要是按照层级拼接的空格，实现向后缩进
	 */
	public void printStruct(String preStr){
		//先把自己输出去
		System.out.println(preStr+"+"+this.name);
		//如果还包含有子组件，那么就输出这些子组件对象
		if(this.childComponents!=null){
			//然后添加一个空格，表示向后缩进一个空格
			preStr+=" ";		
			//输出当前对象的子对象了
			for(Component c : childComponents){
				//递归输出每个子对象
				c.printStruct(preStr);
			}
		}
	}
}
