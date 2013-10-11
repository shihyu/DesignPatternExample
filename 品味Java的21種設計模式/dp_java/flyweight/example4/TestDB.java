package cn.javass.dp.flyweight.example4;
import java.util.*;
/**
 * 供测试用，在内存中模拟数据库中的值
 */
public class TestDB {
	/**
	 * 用来存放单独授权数据的值
	 */
	public static Collection<String> colDB = new ArrayList<String>();
	/**
	 * 用来存放组合授权数据的值，key为组合数据的id，value为该组合包含的多条授权数据的值
	 */
	public static Map<String,String[]> mapDB = new HashMap<String,String[]>();
	
	static{
		//通过静态块来填充模拟的数据，增加一个标识来表明是否组合授权数据
		colDB.add("张三,人员列表,查看,1");
		colDB.add("李四,人员列表,查看,1");
		colDB.add("李四,操作薪资数据,,2");
		
		mapDB.put("操作薪资数据",new String[]{"薪资数据,查看","薪资数据,修改"});
		
		//增加更多的授权数据
		for(int i=0;i<3;i++){
			colDB.add("张三"+i+",人员列表,查看,1");
		}
	}	
}
