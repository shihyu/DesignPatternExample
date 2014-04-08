package cn.javass.dp.command.example5;

/**
 * ÃüÁî¶ÔÏó£¬ËâÄà°×Èâ
 */
public class PorkCommand implements Command {
    private CookApi cookApi = null;

    public void setCookApi(CookApi cookApi) {
        this.cookApi = cookApi;
    }


    public void execute() {
        this.cookApi.cook("ËâÄà°×Èâ");
    }
}