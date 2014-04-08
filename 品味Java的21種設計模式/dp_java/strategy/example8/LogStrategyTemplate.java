package cn.javass.dp.strategy.example8;
import java.text.*;
/**
 * 实现日志策略的抽象模板，实现给消息添加时间
 */
public abstract class LogStrategyTemplate implements LogStrategy {

    public final void log(String msg) {
        //第一步：给消息添加记录日志的时间
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
        msg = df.format(new java.util.Date()) + " 内容是：" + msg;
        //第二步：真正执行日志记录
        doLog(msg);
    }
    /**
     * 真正执行日志记录，让子类去具体实现
     * @param msg 需记录的日志信息
     */
    protected abstract void doLog(String msg);
}