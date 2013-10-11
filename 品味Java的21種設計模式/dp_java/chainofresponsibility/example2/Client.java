package cn.javass.dp.chainofresponsibility.example2;
/**
 * 职责链的客户端，这里只是个示意
 */
public class Client {
	public static void main(String[] args) {
		//先要组装职责链
		Handler h1 = new ConcreteHandler1();
		Handler h2 = new ConcreteHandler2();
		
		h1.setSuccessor(h2);		
		//然后提交请求
		h1.handleRequest();
	}
}
