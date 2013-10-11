package cn.javass.dp.strategy.example7;

/**
 * 上下文对象，通常会持有一个具体的策略对象
 */
public class Context {
	/**
	 * 持有一个具体的策略对象
	 * @directed true
	 * @link aggregation
	 */
	private Strategy strategy;
	/**
	 * 构造方法，传入一个具体的策略对象
	 * @param aStrategy 具体的策略对象
	 */
	public Context(Strategy aStrategy) {
		this.strategy = aStrategy;
	}
	/**
	 * 上下文对客户端提供的操作接口，可以有参数和返回值
	 */
	public void contextInterface() {
		//通常会转调具体的策略对象进行算法运算
		strategy.algorithmInterface();
	}

}

