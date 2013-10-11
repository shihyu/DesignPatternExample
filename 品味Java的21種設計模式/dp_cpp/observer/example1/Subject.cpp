#include "Subject.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example1
				{

					void Subject::attach(Observer *observer)
					{
						observers.push_back(observer);
					}

					void Subject::detach(Observer *observer)
					{
						observers.remove(observer);
					}

					void Subject::notifyObservers()
					{
						for (std::vector<Observer*>::const_iterator observer = observers.begin(); observer != observers.end(); ++observer)
						{
							(*observer)->update(this);
						}
					}
				}
			}
		}
	}
}
