#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example5
				{
					///
					/// <summary> * 订单子记录对应的DAO操作接口 </summary>
					/// 
					class OrderDetailDAO
					{
					///	
					///	 <summary> * 示意方法，保存订单子记录 </summary>
					///	 
					public:
						virtual public void saveOrderDetail() = 0;
					};

				}
			}
		}
	}
}