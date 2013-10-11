package cn.javass.dp.command.example5;
/**
 * 命令对象，北京烤鸭
 */
public class DuckCommand implements Command{
	private CookApi cookApi = null;
	public void setCookApi(CookApi cookApi) {
		this.cookApi = cookApi;
	}
	
	public void execute() {
		this.cookApi.cook("北京烤鸭");
	}
}
