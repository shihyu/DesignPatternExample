#include "ConcreteObserver.h"

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

					void ConcreteObserver::update(Subject *subject)
					{
						// 具体的更新实现
						//这里可能需要更新观察者的状态，使其与目标的状态保持一致
						observerState = (static_cast<ConcreteSubject*>(subject))->getSubjectState();
					}
				}
			}
		}
	}
}
