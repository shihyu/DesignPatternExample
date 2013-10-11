package cn.javass.dp.strategy.example8;
/**
 * 把日志记录到数据库
 */
public class FileLog extends LogStrategyTemplate{
	public void doLog(String msg) {
		System.out.println("现在把 '"+msg+"' 记录到文件中");
	}
}
