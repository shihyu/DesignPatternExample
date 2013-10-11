#include "ProjectManager.h"

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

					object *ProjectManager::handleRequest(RequestModel *rm)
					{
						if(FeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//表示聚餐费用申请
							return handleFeeRequest(rm);
						}
						else
						{
							//其他的项目经理暂时不想处理
							return Handler::handleRequest(rm);
						}
					}

					object *ProjectManager::handleFeeRequest(RequestModel *rm)
					{
						//先把通用的对象造型回来
						FeeRequestModel *frm = static_cast<FeeRequestModel*>(rm);
						std::string str = "";
						//项目经理的权限比较小，只能在500以内
						if(frm->getFee() < 500)
						{
							//为了测试，简单点，只同意小李的
							if((new std::string("小李"))->equals(frm->getUser()))
							{
								str = "项目经理同意"+frm->getUser()+"聚餐费用"+frm->getFee()+"元的请求";
							}
							else
							{
								//其他人一律不同意
								str = "项目经理不同意"+frm->getUser()+"聚餐费用"+frm->getFee()+"元的请求";
							}
							return str;
						}
						else
						{
							//超过500，继续传递给级别更高的人处理
							if(this->successor!=0)
							{
								return successor->handleRequest(rm);
							}
						}
						return str;
					}
				}
			}
		}
	}
}
