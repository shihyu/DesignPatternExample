package cn.javass.dp.chainofresponsibility.example5;
/**
 * 定义职责对象的接口
 */
public abstract class Handler {
	/**
	 * 持有下一个处理请求的对象
	 */
	protected Handler successor = null;
	/**
	 * 设置下一个处理请求的对象
	 * @param successor 下一个处理请求的对象
	 */
	public void setSuccessor(Handler successor){
		this.successor = successor;
	}
	/**
	 * 通用的请求处理方法
	 * @param rm 通用的请求对象
	 * @return 处理后需要返回的对象
	 */
	public Object handleRequest(RequestModel rm){
		if(successor != null){
			//这个是默认的实现，如果子类不愿意处理这个请求，那就传递到下一个职责对象去处理
			return this.successor.handleRequest(rm);
		}else{
			System.out.println("没有后续处理或者暂时不支持这样的功能处理");
			return false;
		}
	}
}
