#include "GeneralManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example4
				{

					std::string GeneralManager::handleFeeRequest(std::string user, double fee)
					{
						std::string str = "";
						//总经理的权限很大，只要请求到了这里，他都可以处理
						if(fee >= 1000)
						{
							//为了测试，简单点，只同意小李的
							if((new std::string("小李"))->equals(user))
							{
								str = "总经理同意"+user+"聚餐费用"+fee+"元的请求";
							}
							else
							{
								//其他人一律不同意
								str = "总经理不同意"+user+"聚餐费用"+fee+"元的请求";
							}
							return str;
						}
						else
						{
							//如果还有后继的处理对象，继续传递
							if(this->successor!=0)
							{
								return successor->handleFeeRequest(user, fee);
							}
						}
						return str;
					}

					bool GeneralManager::handlePreFeeRequest(std::string user, double requestNum)
					{
						if(requestNum >= 5000)
						{
							//工作需要嘛，统统同意
							puts("总经理同意"+user+"预支差旅费用"+requestNum+"元的请求");
							return true;
						}
						else
						{
							//如果还有后继的处理对象，继续传递
							if(this->successor!=0)
							{
								return this->successor->handlePreFeeRequest(user, requestNum);
							}
						}
						return true;
					}
				}
			}
		}
	}
}
