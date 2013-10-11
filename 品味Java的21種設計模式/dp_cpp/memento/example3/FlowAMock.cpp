#include "FlowAMock.h"

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

					FlowAMock::FlowAMock(std::string flowName)
					{
						this->flowName = flowName;
					}

					void FlowAMock::runPhaseOne()
					{
						//在这个阶段，可能产生了中间结果，示意一下
						tempResult = 3;
						tempState = "PhaseOne";
					}

					void FlowAMock::schema1()
					{
						//示意，需要使用第一个阶段产生的数据
						this->tempState += ",Schema1";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 11;
					}

					void FlowAMock::schema2()
					{
						//示意，需要使用第一个阶段产生的数据
						this->tempState += ",Schema2";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 22;
					}

					FlowAMockMemento *FlowAMock::createMemento()
					{
						return new MementoImpl(this->tempResult,this->tempState);
					}

					void FlowAMock::setMemento(FlowAMockMemento *memento)
					{
						MementoImpl *mementoImpl = static_cast<MementoImpl*>(memento);
						this->tempResult = mementoImpl->getTempResult();
						this->tempState = mementoImpl->getTempState();
					}

					FlowAMock::MementoImpl::MementoImpl(int tempResult, std::string tempState)
					{
						this->tempResult = tempResult;
						this->tempState = tempState;
					}

					int FlowAMock::MementoImpl::getTempResult()
					{
						return tempResult;
					}

					std::string FlowAMock::MementoImpl::getTempState()
					{
						return tempState;
					}
				}
			}
		}
	}
}