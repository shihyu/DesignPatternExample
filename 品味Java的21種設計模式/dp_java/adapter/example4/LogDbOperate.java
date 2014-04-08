package cn.javass.dp.adapter.example4;

import java.util.List;
/**
 * DB存储日志的实现，为了简单，这里就不去真的实现和数据库交互了，示意一下
 */
public class LogDbOperate implements LogDbOperateApi {

    public void createLog(LogModel lm) {
        System.out.println("now in LogDbOperate createLog,lm=" + lm);
    }

    public List<LogModel> getAllLog() {
        System.out.println("now in LogDbOperate getAllLog");
        return null;
    }

    public void removeLog(LogModel lm) {
        System.out.println("now in LogDbOperate removeLog,lm=" + lm);
    }

    public void updateLog(LogModel lm) {
        System.out.println("now in LogDbOperate updateLog,lm=" + lm);
    }

}
