#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example7
				{
					///
					/// <summary> * 迭代器接口，定义访问和遍历元素的操作，实现双向迭代 </summary>
					/// 
					class Iterator
					{
					///	
					///	 <summary> * 移动到聚合对象的第一个位置 </summary>
					///	 
					public:
						virtual public void first() = 0;
					///	
					///	 <summary> * 移动到聚合对象的下一个位置 </summary>
					///	 
						virtual public void next() = 0;
					///	
					///	 <summary> * 判断是否已经移动聚合对象的最后一个位置 </summary>
					///	 * <returns> true表示已经移动聚合对象的最后一个位置，
					///	 *         false表示还没有移动到聚合对象的最后一个位置 </returns>
					///	 
						virtual public bool isDone() = 0;
					///	
					///	 <summary> * 获取迭代的当前元素 </summary>
					///	 * <returns> 迭代的当前元素 </returns>
					///	 
						virtual public object *currentItem() = 0;


					///	
					///	 <summary> * 判断是否为第一个元素 </summary>
					///	 * <returns> 如果为第一个元素，返回true，否则返回false </returns>
					///	 
						virtual public bool isFirst() = 0;
					///	
					///	 <summary> * 移动到聚合对象的上一个位置 </summary>
					///	 
						virtual public void previous() = 0;
					};

				}
			}
		}
	}
}