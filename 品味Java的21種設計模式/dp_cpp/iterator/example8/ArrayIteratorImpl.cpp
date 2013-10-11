#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example8
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						this->pms = aggregate->getPays();
					}

					bool ArrayIteratorImpl::hasNext()
					{
						//判断是否还有下一个元素
						if(pms!=0 && index<=(sizeof(pms) / sizeof(pms[0])-1))
						{
							return true;
						}
						return false;
					}

					Collection *ArrayIteratorImpl::next(int num)
					{
						Collection *col = std::vector();
						int count=0;
						while(hasNext() && count<num)
						{
							col->add(pms[index]);
							//每取走一个值，就把已访问索引加1
							index++;
							count++;
						}
						return col;
					}

					bool ArrayIteratorImpl::hasPrevious()
					{
						if(pms!=0 && index > 0)
						{
							return true;
						}
						return false;
					}

					Collection *ArrayIteratorImpl::previous(int num)
					{
						Collection *col = std::vector();
						int count=0;
						//简单的实现就是把索引退回去num个，然后再取值。
						//但事实上这种实现是有可能多退回去数据的，比如：已经到了最后一页，而且最后一页的数据不够一页的数据，那么退回去num个索引就退多了
						//为了示例的简洁性，这里就不去处理了
						index = index - num;
						while(hasPrevious() && count<num)
						{
							col->add(pms[index]);
							index ++;
							count++;
						}
						return col;
					}
				}
			}
		}
	}
}