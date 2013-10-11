package cn.javass.dp.iterator.example8;
import java.util.*;
/**
 * 定义翻页访问聚合元素的迭代接口
 */
public interface AggregationIterator {
	/**
	 * 判断是否还有下一个元素，无所谓是否够一页的数据，
	 * 因为最后哪怕只有一条数据，也是要算一页的
	 * @return 如果有下一个元素，返回true，没有下一个元素就返回false
	 */
	public boolean hasNext();
	/**
	 * 取出下面几个元素
	 * @param num 需要获取的记录条数
	 * @return 下面几个元素
	 */
	public Collection next(int num);
	/**
	 * 判断是否还有上一个元素，无所谓是否够一页的数据，
	 * 因为最后哪怕只有一条数据，也是要算一页的
	 * @return 如果有上一个元素，返回true，没有上一个元素就返回false
	 */
	public boolean hasPrevious();
	/**
	 * 取出上面几个元素
	 * @param num 需要获取的记录条数
	 * @return 上面几个元素
	 */
	public Collection previous(int num);
}
