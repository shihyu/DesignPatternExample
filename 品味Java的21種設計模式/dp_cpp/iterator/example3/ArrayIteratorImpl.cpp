#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example3
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						InitializeInstanceFields();
						this->aggregate = aggregate;
					}

					void ArrayIteratorImpl::first()
					{
						index = 0;
					}

					void ArrayIteratorImpl::next()
					{
						if(index < this->aggregate->size())
						{
							index = index + 1;
						}
					}

					bool ArrayIteratorImpl::isDone()
					{
						if(index == this->aggregate->size())
						{
							return true;
						}
						return false;
					}

					object *ArrayIteratorImpl::currentItem()
					{
						return this->aggregate->get(index);
					}
				}
			}
		}
	}
}
