package cn.javass.dp.command.example2;
/**
 * 机箱对象，本身有按钮，持有按钮对应的命令对象
 */
public class Box {
	/**
	 * 开机命令对象
	 */
	private Command openCommand;
	/**
	 * 设置开机命令对象
	 * @param command 开机命令对象
	 */
	public void setOpenCommand(Command command){
		this.openCommand = command;
	}
	/**
	 * 提供给客户使用，接受并相应用户请求，相当于按钮被按下触发的方法
	 */
	public void openButtonPressed(){
		//按下按钮，执行命令
		openCommand.execute();
	}
}
