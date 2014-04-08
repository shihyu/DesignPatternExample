package cn.javass.dp.command.example8;

public class Invoker {
    /**
     * 持有命令对象
     */
    private Command cmd = null;
    /**
     * 设置命令对象
     * @param cmd 命令对象
     */
    public void setCmd(Command cmd) {
        this.cmd = cmd;
    }
    /**
     * 开始打印
     */
    public void startPrint() {
        //执行命令的功能
        this.cmd.execute();
    }
}