package cn.javass.dp.command.example7;

import java.io.Serializable;

/**
 * 命令对象，北京烤鸭
 */
public class DuckCommand implements Command, Serializable {
    private CookApi cookApi = null;
    public void setCookApi(CookApi cookApi) {
        this.cookApi = cookApi;
    }
    private int tableNum;
    public DuckCommand(int tableNum) {
        this.tableNum = tableNum;
    }
    public int getTableNum() {
        return this.tableNum;
    }

    public void execute() {
        this.cookApi.cook(tableNum, "北京烤鸭");
    }
}
