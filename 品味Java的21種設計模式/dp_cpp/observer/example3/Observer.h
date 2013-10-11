#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example3
				{
					///
					/// <summary> * 观察者，比如报纸的读者 </summary>
					/// 
					class Observer
					{
					///	
					///	 <summary> * 被通知的方法，直接把报纸的内容推送过来 </summary>
					///	 * <param name="content"> 报纸的内容 </param>
					///	 
					public:
						virtual public void update(std::string) = 0;
					};

				}
			}
		}
	}
}