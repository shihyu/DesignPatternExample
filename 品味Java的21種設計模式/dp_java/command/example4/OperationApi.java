package cn.javass.dp.command.example4;
/**
 * 操作运算的接口
 */
public interface OperationApi {
	/**
	 * 获取计算完成后的结果
	 * @return 计算完成后的结果
	 */
	public int getResult();
	/**
	 * 设置计算开始的初始值
	 * @param result 计算开始的初始值
	 */
	public void setResult(int result);
	/**
	 * 执行加法
	 * @param num 需要加的数
	 */
	public void add(int num);
	/**
	 * 执行减法
	 * @param num 需要减的数
	 */
	public void substract(int num);
}
