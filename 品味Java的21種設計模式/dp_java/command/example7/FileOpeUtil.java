package cn.javass.dp.command.example7;

import java.io.*;
import java.util.*;
/**
 * 读写文件的辅助工具类
 */
public class FileOpeUtil {
	/**
	 * 私有化构造方法，避免外部无谓的创建类实例
	 * 这个工具类不需要创建类实例
	 */
	private FileOpeUtil() {
	}
	/**
	 * 读文件，从文件里面获取存储的List对象
	 * @param pathName 文件路径和文件名
	 * @return 存储的List对象
	 */
	public static List readFile(String pathName) {
		List list = new ArrayList();
		ObjectInputStream oin = null;
		try {
			File f = new File(pathName);
			if(f.exists()){
				oin = new ObjectInputStream(
						new BufferedInputStream(new FileInputStream(f))
				);
				list = (List)oin.readObject();
			}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			try {
				if(oin!=null){
					oin.close();
				}
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		return list;
	}
	/**
	 * 写文件，把list对象写出到文件中去
	 * @param pathName 文件路径和文件名
	 * @param list 要写到文件的list对象
	 */
	public static void writeFile(String pathName,List list){
		File f = new File(pathName);
		ObjectOutputStream oout = null;
		try {
			oout = new ObjectOutputStream(
					new BufferedOutputStream(new FileOutputStream(f))
			);
			oout.writeObject(list);			
		} catch (IOException e) {
			e.printStackTrace();
		}finally{
			try {
				oout.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
}
