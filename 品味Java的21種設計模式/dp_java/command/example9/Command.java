package cn.javass.dp.command.example9;

public interface Command {
    public void execute();
    /**
     * 设置要输出的内容
     * @param s 要输出的内容
     */
    public void setStr(String s);
}
