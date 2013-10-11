#include "ConcreteIterator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					ConcreteIterator::ConcreteIterator(ConcreteAggregate *aggregate)
					{
						InitializeInstanceFields();
						this->aggregate = aggregate;
					}

					void ConcreteIterator::first()
					{
						index = 0;
					}

					void ConcreteIterator::next()
					{
						if(index < this->aggregate->size())
						{
							index = index + 1;
						}
					}

					bool ConcreteIterator::isDone()
					{
						if(index == this->aggregate->size())
						{
							return true;
						}
						return false;
					}

					object *ConcreteIterator::currentItem()
					{
						return this->aggregate->get(index);
					}
				}
			}
		}
	}
}