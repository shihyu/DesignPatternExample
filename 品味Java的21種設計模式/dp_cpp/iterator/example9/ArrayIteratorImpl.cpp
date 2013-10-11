#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example9
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

					bool ArrayIteratorImpl::hasPrevious()
					{
						if(pms!=0 && index > 0)
						{
							return true;
						}
						return false;
					}

					Collection *ArrayIteratorImpl::getPage(int pageNum, int pageShow)
					{
						Collection *col = std::vector();
						//需要在这里先计算需要获取的数据的开始条数和结束条数
						int start = (pageNum-1)*pageShow;
						int end = start + pageShow-1;
						//控制start的边界，最小是0
						if(start < 0)
						{
							start = 0;
						}
						//控制end的边界，最大是数组的最大索引
						if(end > sizeof(this->pms) / sizeof(this->pms[0])-1)
						{
							end = sizeof(this->pms) / sizeof(this->pms[0]) - 1;
						}
						//每次取值都是从头开始循环，所以设置index为0
						index = 0;
						while(hasNext() && index<=end)
						{
							if(index >= start)
							{
								col->add(pms[index]);
							}
							//把已访问索引加1
							index++;
						}
						return col;
					}
				}
			}
		}
	}
}