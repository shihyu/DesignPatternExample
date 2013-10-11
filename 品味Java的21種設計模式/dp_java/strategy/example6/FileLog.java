package cn.javass.dp.strategy.example6;
/**
 * 把日志记录到文件
 */
public class FileLog implements LogStrategy{
	public void log(String msg) {
		System.out.println("现在把 '"+msg+"' 记录到文件中");
	}
}
