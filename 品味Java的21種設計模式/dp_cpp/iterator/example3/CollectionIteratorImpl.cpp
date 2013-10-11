#include "CollectionIteratorImpl.h"

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

					CollectionIteratorImpl::CollectionIteratorImpl(PayManager *aggregate)
					{
						InitializeInstanceFields();
						this->aggregate = aggregate;
					}

					void CollectionIteratorImpl::first()
					{
						index = 0;
					}

					void CollectionIteratorImpl::next()
					{
						if(index < this->aggregate->size())
						{
							index = index + 1;
						}
					}

					bool CollectionIteratorImpl::isDone()
					{
						if(index == this->aggregate->size())
						{
							return true;
						}
						return false;
					}

					object *CollectionIteratorImpl::currentItem()
					{
						return this->aggregate->get(index);
					}
				}
			}
		}
	}
}