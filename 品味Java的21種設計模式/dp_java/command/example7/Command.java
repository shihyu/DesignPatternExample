package cn.javass.dp.command.example7;
/**
 * 命令接口，声明执行的操作
 */
public interface Command {
	/**
	 * 执行命令对应的操作
	 */
	public void execute();
	/**
	 * 设置命令的接收者
	 * @param cookApi 命令的接收者 
	 */
	public void setCookApi(CookApi cookApi);
	/**
	 * 返回发起请求的桌号，就是点菜的桌号
	 * @return 发起请求的桌号
	 */
	public int getTableNum();
}