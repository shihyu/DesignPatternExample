package cn.javass.dp.mediator.example1;
/**
 * 具体的同事类A
 */
public class ConcreteColleagueA extends Colleague {
	public ConcreteColleagueA(Mediator mediator) {
		super(mediator);
	}
	/**
	 * 示意方法，执行某些业务功能
	 */
	public void someOperation() {
		//在需要跟其他同事通信的时候，通知中介者对象
		getMediator().changed(this);
	}
}