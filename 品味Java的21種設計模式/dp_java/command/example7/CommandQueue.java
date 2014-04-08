package cn.javass.dp.command.example7;
import java.util.*;

/**
 * 命令队列类
 */
public class CommandQueue {
    /**
     * 新添加的，文件名称
     */
    private final static String FILE_NAME = "CmdQueue.txt";
    /**
     * 用来存储命令对象的队列
     * 请注意：这里没有使用java.util.Queue，是因为常用的实现Queue接口的LinkedList类要求存放的对象是可排序的，
     * 排序是使用的Comparator，这跟要演示的功能没有多大关系，反而会增加复杂性。
     * 另外一个需要的功能是把命令对象按照先后顺序排好就可以了，只要是有序的就可以了。
     * 因此为了演示的简洁性，就直接使用List了。
     */
    private static List<Command> cmds = null;
    static {
        //获取上次没有做完的命令队列
        cmds = FileOpeUtil.readFile(FILE_NAME);

        if (cmds == null) {
            cmds = new ArrayList<Command>();
        }
    }
    /**
     * 服务员传过来一个新的菜单
     * 需要同步：是因为同时会有很多的服务员传入菜单，而同时又有很多厨师在从队列里取值
     * @param menu 传入的菜单
     */
    public synchronized static void addMenu(MenuCommand menu) {
        //一个菜单对象包含很多命令对象
        for (Command cmd : menu.getCommands()) {
            cmds.add(cmd);
        }

        //记录请求日志
        FileOpeUtil.writeFile(FILE_NAME, cmds);
    }
    /**
     * 厨师从命令队列里面获取命令对象进行处理
     * 也是需要同步的
     */
    public synchronized static Command getOneCommand() {
        Command cmd = null;

        if (cmds.size() > 0) {
            //取出队列的第一个，因为是约定的按照加入的先后来处理
            cmd = cmds.get(0);
            //同时从队列里面取掉这个命令对象
            cmds.remove(0);

            //记录请求日志
            FileOpeUtil.writeFile(FILE_NAME, cmds);
        }

        return cmd;
    }
}