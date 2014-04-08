package cn.javass.dp.adapter.example5;

import java.util.List;

/**
 * 类适配器对象
 */
public class ClassAdapter extends LogFileOperate implements LogDbOperateApi {

    public ClassAdapter(String logFilePathName) {
        super(logFilePathName);
    }

    public void createLog(LogModel lm) {
        //1：先读取文件的内容
        List<LogModel> list = this.readLogFile();
        //2：加入新的日志对象
        list.add(lm);
        //3：重新写入文件
        this.writeLogFile(list);
    }

    public List<LogModel> getAllLog() {
        return this.readLogFile();
    }

    public void removeLog(LogModel lm) {
        //1：先读取文件的内容
        List<LogModel> list = this.readLogFile();
        //2：删除相应的日志对象
        list.remove(lm);
        //3：重新写入文件
        this.writeLogFile(list);
    }

    public void updateLog(LogModel lm) {
        //1：先读取文件的内容
        List<LogModel> list = this.readLogFile();

        //2：修改相应的日志对象
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).getLogId().equals(lm.getLogId())) {
                list.set(i, lm);
                break;
            }
        }

        //3：重新写入文件
        this.writeLogFile(list);
    }
}
