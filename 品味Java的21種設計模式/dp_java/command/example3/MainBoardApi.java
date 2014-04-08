package cn.javass.dp.command.example3;
/**
 * 主板的接口
 */
public interface MainBoardApi {
    /**
     * 主板具有能开机的功能
     */
    public void open();
    /**
     * 主板具有实现重启的功能
     */
    public void reset();
}