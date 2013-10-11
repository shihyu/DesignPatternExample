#include "WorthAnalyzeVisitor.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example4
				{

					void WorthAnalyzeVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec)
					{
						//根据购买的金额大小、购买的产品和服务的多少、购买的频率等进行分析
						//企业客户的标准会比个人客户的高
						puts("现在对企业客户"+ec->getName()+"进行价值分析");
					}

					void WorthAnalyzeVisitor::visitPersonalCustomer(PersonalCustomer *pc)
					{
						puts("现在对个人客户"+pc->getName()+"进行价值分析");
					}
				}
			}
		}
	}
}