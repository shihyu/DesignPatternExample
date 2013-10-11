#include "FlowAMockPrototype.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example3
				{

					FlowAMockPrototype::FlowAMockPrototype(std::string flowName)
					{
						this->flowName = flowName;
					}

					void FlowAMockPrototype::runPhaseOne()
					{
						//在这个阶段，可能产生了中间结果，示意一下
						tempResult = 3;
						tempState = "PhaseOne";
					}

					void FlowAMockPrototype::schema1()
					{
						//示意，需要使用第一个阶段产生的数据
						this->tempState += ",Schema1";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 11;
					}

					void FlowAMockPrototype::schema2()
					{
						//示意，需要使用第一个阶段产生的数据
						this->tempState += ",Schema2";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 22;
					}

					FlowAMockMemento *FlowAMockPrototype::createMemento()
					{
						try
						{
							return new MementoImplPrototype(static_cast<FlowAMockPrototype*>(this->clone()));
						}
						catch (CloneNotSupportedException *e)
						{
							e->printStackTrace();
						}
						return 0;
					}

					void FlowAMockPrototype::setMemento(FlowAMockMemento *memento)
					{
						MementoImplPrototype *mementoImpl = static_cast<MementoImplPrototype*>(memento);
						this->tempResult = mementoImpl->getFlowAMock()->tempResult;
						this->tempState = mementoImpl->getFlowAMock()->tempState;
					}

					FlowAMockPrototype::MementoImplPrototype::MementoImplPrototype(FlowAMockPrototype *f)
					{
						this->flowAMock = f;
					}

					FlowAMockPrototype *FlowAMockPrototype::MementoImplPrototype::getFlowAMock()
					{
						return flowAMock;
					}
				}
			}
		}
	}
}