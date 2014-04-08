package cn.javass.dp.command.example5;
import java.util.*;
/**
 * 菜单对象，是个宏命令对象
 */
public class MenuCommand implements Command {
    /**
     * 用来记录组合本菜单的多道菜品，也就是多个命令对象
     */
    private Collection<Command> col = new ArrayList<Command>();
    /**
     * 点菜，把菜品加入到菜单中
     * @param cmd 客户点的菜
     */
    public void addCommand(Command cmd) {
        col.add(cmd);
    }

    public void execute() {
        //执行菜单其实就是循环执行菜单里面的每个菜
        for (Command cmd : col) {
            cmd.execute();
        }
    }
}
