package cn.javass.dp.mediator.example1;
/**
 * 中介者，定义各个同事对象通信的接口
 */
public interface Mediator {
	/**
	 * 同事对象在自身改变的时候来通知中介者的方法，
	 * 让中介者去负责相应的与其他同事对象的交互
	 * @param colleague 同事对象自身，好让中介者对象通过对象实例
	 *                  去获取同事对象的状态
	 */
	public void changed(Colleague colleague);
}