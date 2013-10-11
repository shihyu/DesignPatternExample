package cn.javass.dp.command.example5;
import java.util.*;
/**
 * 服务员，负责组合菜单，负责组装每个菜和具体的实现者，
 * 还负责执行调用，相当于标准Command模式的Client+Invoker
 */
public class Waiter {
	/**
	 * 持有一个宏命令对象——菜单
	 */
	private MenuCommand menuCommand = new MenuCommand();
	/**
	 * 客户点菜
	 * @param cmd 客户点的菜，每道菜是一个命令对象
	 */
	public void orderDish(Command cmd){
		//客户传过来的命令对象是没有和接收者组装的
		//在这里组装吧
		CookApi hotCook = new HotCook();
		CookApi coolCook = new CoolCook();
		//判读到底是组合凉菜师傅还是热菜师傅
		//简单点根据命令的原始对象的类型来判断
		if(cmd instanceof DuckCommand){
			((DuckCommand)cmd).setCookApi(hotCook);
		}else if(cmd instanceof ChopCommand){
			((ChopCommand)cmd).setCookApi(hotCook);
		}else if(cmd instanceof PorkCommand){
			//这是个凉菜，所以要组合凉菜的师傅
			((PorkCommand)cmd).setCookApi(coolCook);
		}
		//添加到菜单中
		menuCommand.addCommand(cmd);
	}
	/**
	 * 客户点菜完毕，表示要执行命令了，这里就是执行菜单这个组合命令
	 */
	public void orderOver(){
		this.menuCommand.execute();
	}
}
