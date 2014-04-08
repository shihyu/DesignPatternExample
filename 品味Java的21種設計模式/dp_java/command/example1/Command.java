package cn.javass.dp.command.example1;
/**
 * 命令接口，声明执行的操作
 */
public interface Command {
    /**
     * 执行命令对应的操作
     */
    public void execute();
}
