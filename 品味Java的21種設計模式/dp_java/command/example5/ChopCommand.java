package cn.javass.dp.command.example5;
/**
 * 命令对象，绿豆排骨煲
 */
public class ChopCommand implements Command{
	/**
	 * 持有具体做菜的厨师的对象
	 */
	private CookApi cookApi = null;
	/**
	 * 设置具体做菜的厨师的对象
	 * @param cookApi 具体做菜的厨师的对象
	 */
	public void setCookApi(CookApi cookApi) {
		this.cookApi = cookApi;
	}
	
	public void execute() {
		this.cookApi.cook("绿豆排骨煲");
	}
}
