package cn.javass.dp.command.example4;
/**
 * 具体的加法命令实现对象
 */
public class AddCommand implements Command {
    /**
     * 持有具体执行计算的对象
     */
    private OperationApi operation = null;
    /**
     * 操作的数据，也就是要加上的数据
     */
    private int opeNum;
    /**
     * 构造方法，传入具体执行计算的对象
     * @param operation 具体执行计算的对象
     * @param opeNum 要加上的数据
     */
    public AddCommand(OperationApi operation, int opeNum) {
        this.operation = operation;
        this.opeNum = opeNum;
    }

    public void execute() {
        //转调接收者去真正执行功能，这个命令是做加法
        this.operation.add(opeNum);
    }

    public void undo() {
        //转调接收者去真正执行功能
        //命令本身是做加法，那么撤销的时候就是做减法了
        this.operation.substract(opeNum);
    }
}
