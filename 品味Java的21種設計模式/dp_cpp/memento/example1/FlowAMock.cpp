#include "FlowAMock.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example1
				{

					FlowAMock::FlowAMock(std::string flowName)
					{
						this->flowName = flowName;
					}

					std::string FlowAMock::getTempState()
					{
						return tempState;
					}

					void FlowAMock::setTempState(std::string tempState)
					{
						this->tempState = tempState;
					}

					int FlowAMock::getTempResult()
					{
						return tempResult;
					}

					void FlowAMock::setTempResult(int tempResult)
					{
						this->tempResult = tempResult;
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
				}
			}
		}
	}
}
