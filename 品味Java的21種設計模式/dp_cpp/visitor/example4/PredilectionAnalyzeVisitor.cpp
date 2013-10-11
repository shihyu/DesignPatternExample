#include "PredilectionAnalyzeVisitor.h"

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

					void PredilectionAnalyzeVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec)
					{
						//根据过往购买的历史、潜在购买意向
						//以及客户所在行业的发展趋势、客户的发展预期等的分析
						puts("现在对企业客户"+ec->getName()+"进行产品偏好分析");
					}

					void PredilectionAnalyzeVisitor::visitPersonalCustomer(PersonalCustomer *pc)
					{
						puts("现在对个人客户"+pc->getName()+"进行产品偏好分析");
					}
				}
			}
		}
	}
}
