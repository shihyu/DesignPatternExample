package cn.javass.dp.memento.example4;

public class AddCommand extends AbstractCommand {

    private int opeNum;
    public AddCommand(int opeNum) {
        this.opeNum = opeNum;
    }

    public void execute() {
        this.operation.add(opeNum);
    }
}
