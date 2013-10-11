#pragma once

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
					/// <summary> * 访问者接口 </summary>
					/// 
					class Visitor
					{
					///	
					///	 <summary> * 访问企业客户，相当于给企业客户添加访问者的功能 </summary>
					///	 * <param name="ec"> 企业客户的对象 </param>
					///	 
					public:
						virtual public void visitEnterpriseCustomer(EnterpriseCustomer*) = 0;
					///	
					///	 <summary> * 访问个人客户，相当于给个人客户添加访问者的功能 </summary>
					///	 * <param name="pc"> 个人客户的对象 </param>
					///	 
						virtual public void visitPersonalCustomer(PersonalCustomer*) = 0;
					};


				}
			}
		}
	}
}