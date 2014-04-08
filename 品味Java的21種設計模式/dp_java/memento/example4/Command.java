package cn.javass.dp.memento.example4;
/**
 * 定义一个命令的接口
 */
public interface Command {
    /**
     * 执行命令
     */
    public void execute();
    /**
     * 撤销命令，恢复到备忘录对象记录的状态
     * @param m 备忘录对象
     */
    public void undo(Memento m);
    /**
     * 重做命令，恢复到备忘录对象记录的状态
     * @param m 备忘录对象
     */
    public void redo(Memento m);
    /**
     * 创建保存原发器对象的状态的备忘录对象
     * @return 创建好的备忘录对象
     */
    public Memento createMemento();
}
