#include "Operation.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example4
				{

					int Operation::getResult()
					{
						return result;
					}

					void Operation::add(int num)
					{
						result += num;
					}

					void Operation::substract(int num)
					{
						result -= num;
					}

					Memento *Operation::createMemento()
					{
						MementoImpl *m = new MementoImpl(result);
						return m;
					}

					void Operation::setMemento(Memento *memento)
					{
						MementoImpl *m = static_cast<MementoImpl*>(memento);
						this->result = m->getResult();
					}

					Operation::MementoImpl::MementoImpl(int result)
					{
						this->result = result;
					}

					int Operation::MementoImpl::getResult()
					{
						return result;
					}
				}
			}
		}
	}
}
