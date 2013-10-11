#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example1
				{
					///
					/// <summary> * 已经存在的接口，这个接口需要被适配 </summary>
					/// 
					class Adaptee
					{
					///	
					///	 <summary> * 示意方法，原本已经存在，已经实现的方法 </summary>
					///	 
					public:
						virtual void specificRequest();
					};


				}
			}
		}
	}
}