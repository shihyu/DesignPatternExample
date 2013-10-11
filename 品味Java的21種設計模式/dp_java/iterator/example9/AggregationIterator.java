package cn.javass.dp.iterator.example9;
import java.util.*;
/**
 * 定义随机翻页访问聚合元素的迭代接口
 */
public interface AggregationIterator {
	/**
	 * 判断是否还有下一个元素，无所谓是否够一页的数据，
	 * 因为最后哪怕只有一条数据，也是要算一页的
	 * @return 如果有下一个元素，返回true，没有下一个元素就返回false
	 */
	public boolean hasNext();	
	/**
	 * 判断是否还有上一个元素，无所谓是否够一页的数据，
	 * 因为最后哪怕只有一条数据，也是要算一页的
	 * @return 如果有上一个元素，返回true，没有上一个元素就返回false
	 */
	public boolean hasPrevious();
	/**
	 * 取出指定页数的数据
	 * @param pageNum 要获取的页数
	 * @param pageShow 每页显示的数据条数
	 * @return 指定页数的数据
	 */
	public Collection getPage(int pageNum,int pageShow);
}
