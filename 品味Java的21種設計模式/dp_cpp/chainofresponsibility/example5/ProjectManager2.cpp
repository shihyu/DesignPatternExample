#include "ProjectManager2.h"

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

					object *ProjectManager2::handleRequest(RequestModel *rm)
					{
						if(PreFeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//表示预支差旅费用申请
							return myHandler(rm);
						}
						else
						{
							//其他的让父类去处理
							return ProjectManager::handleRequest(rm);
						}
					}

					object *ProjectManager2::myHandler(RequestModel *rm)
					{
						//先把通用的对象造型回来
						PreFeeRequestModel *frm = static_cast<PreFeeRequestModel*>(rm);
						//项目经理的权限比较小，只能在5000以内
						if(frm->getFee() < 5000)
						{
							//工作需要嘛，统统同意
							puts("项目经理同意"+frm->getUser()+"预支差旅费用"+frm->getFee()+"元的请求");
							return true;
						}
						else
						{
							//超过5000，继续传递给级别更高的人处理
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