#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example6
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						//在这里先对聚合对象的数据进行过滤，比如工资必须在3000以下
						Collection<PayModel*> *tempCol = std::vector<PayModel*>();
						for (unknown::const_iterator pm = aggregate->getPays()->begin(); pm != aggregate->getPays()->end(); ++pm)
						{
							if((*pm)->getPay() < 3000)
							{
								tempCol->add(*pm);
							}
						}
						//然后把符合要求的数据存放到用来迭代的数组
						this->pms = new PayModel[tempCol->size()];
						int i=0;
						for (Collection<PayModel*>::const_iterator pm = tempCol->begin(); pm != tempCol->end(); ++pm)
						{
							this->pms[i] = *pm;
							i++;
						}
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

					object *ArrayIteratorImpl::next()
					{
						object *retObj = 0;
						if(hasNext())
						{
							retObj = pms[index];
							//每取走一个值，就把已访问索引加1
							index++;
						}

						//在这里对要返回的数据进行过滤，比如不让查看工资数据
						(static_cast<PayModel*>(retObj))->setPay(0.0);

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