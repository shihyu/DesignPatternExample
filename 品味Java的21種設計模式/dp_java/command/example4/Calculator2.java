package cn.javass.dp.command.example4;
import java.util.*;
/**
 * 计算器类，计算器上有加法按钮、减法按钮
 */
public class Calculator2 {
    /**
     * 持有执行加法的命令对象
     */
    private Command addCmd = null;
    /**
     * 持有执行减法的命令对象
     */
    private Command substractCmd = null;
    /**
     * 设置执行加法的命令对象
     * @param addCmd 执行加法的命令对象
     */
    public void setAddCmd(Command addCmd) {
        this.addCmd = addCmd;
    }
    /**
     * 设置执行减法的命令对象
     * @param substractCmd 执行减法的命令对象
     */
    public void setSubstractCmd(Command substractCmd) {
        this.substractCmd = substractCmd;
    }
    /**
     * 提供给客户使用，执行加法功能
     */
    public void addPressed() {
        this.addCmd.execute();
    }
    /**
     * 提供给客户使用，执行减法功能
     */
    public void substractPressed() {
        this.substractCmd.execute();
    }
}
