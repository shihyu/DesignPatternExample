#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example2
				{
					///
					/// <summary> * 职责的接口，也就是处理请求的接口 </summary>
					/// 
					class Handler
					{
					///	
					///	 <summary> * 持有后继的职责对象 </summary>
					///	 
					protected:
						Handler *successor;
					///	
					///	 <summary> * 设置后继的职责对象 </summary>
					///	 * <param name="successor"> 后继的职责对象 </param>
					///	 
					public:
						virtual void setSuccessor(Handler *successor);
					///	
					///	 <summary> * 示意处理请求的方法，虽然这个示意方法是没有传入参数，
					///	 * 但实际是可以传入参数的，根据具体需要来选择是否传递参数 </summary>
					///	 
						virtual void handleRequest() = 0;
					};


				}
			}
		}
	}
}