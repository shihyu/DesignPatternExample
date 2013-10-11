#include "GeneralManager2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					object *GeneralManager2::handleRequest(RequestModel *rm)
					{
						if(PreFeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//表示预支差旅费用申请
							return myHandler(rm);
						}
						else
						{
							//其他的让父类去处理
							return GeneralManager::handleRequest(rm);
						}
					}

					object *GeneralManager2::myHandler(RequestModel *rm)
					{
						//先把通用的对象造型回来
						PreFeeRequestModel *frm = static_cast<PreFeeRequestModel*>(rm);
						if(frm->getFee() >= 5000)
						{
							//工作需要嘛，统统同意
							puts("总经理同意"+frm->getUser()+"预支差旅费用"+frm->getFee()+"元的请求");
							return true;
						}
						else
						{
							//如果还有后继的处理对象，继续传递
							if(this->successor!=0)
							{
								return this->successor->handleRequest(rm);
							}
						}
						return false;
					}
				}
			}
		}
	}
}