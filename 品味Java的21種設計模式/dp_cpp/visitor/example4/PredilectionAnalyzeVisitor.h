#pragma once

#include "Visitor.h"
#include "EnterpriseCustomer.h"
#include "PersonalCustomer.h"

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
					///
					/// <summary> * 具体的访问者，实现对客户的偏好分析 </summary>
					/// 
					class PredilectionAnalyzeVisitor : public Visitor
					{
					public:
						virtual void visitEnterpriseCustomer(EnterpriseCustomer *ec);
						virtual void visitPersonalCustomer(PersonalCustomer *pc);
					};
				}
			}
		}
	}
}