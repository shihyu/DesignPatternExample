package cn.javass.dp.memento.example4;
/**
 * 命令对象的公共对象，实现各个命令对象的公共方法
 */
public abstract class AbstractCommand implements Command {
    /**
     * 具体的功能实现，这里不管
     */
    public abstract void execute();
    /**
     * 持有真正的命令实现者对象
     */
    protected OperationApi operation = null;
    public void setOperation(OperationApi operation) {
        this.operation = operation;
    }

    public Memento createMemento() {
        return this.operation.createMemento();
    }

    public void redo(Memento m) {
        this.operation.setMemento(m);
    }

    public void undo(Memento m) {
        this.operation.setMemento(m);
    }
}
