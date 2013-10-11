#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example5
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						this->aggregate = aggregate;
					}

					bool ArrayIteratorImpl::hasNext()
					{
						//判断是否还有下一个元素
						if(aggregate!=0 && index<aggregate->size())
						{
							return true;
						}
						return false;
					}

					object *ArrayIteratorImpl::next()
					{
						object *retObj = 0;
						if(hasNext())
						{
							retObj = aggregate->get(index);
							//每取走一个值，就把已访问索引加1
							index++;
						}
						return retObj;
					}

					void ArrayIteratorImpl::remove()
					{
						//暂时可以不实现		
					}
				}
			}
		}
	}
}
