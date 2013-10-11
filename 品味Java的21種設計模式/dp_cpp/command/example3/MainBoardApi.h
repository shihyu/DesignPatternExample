#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example3
				{
					///
					/// <summary> * 主板的接口 </summary>
					/// 
					class MainBoardApi
					{
					///	
					///	 <summary> * 主板具有能开机的功能 </summary>
					///	 
					public:
						virtual public void open() = 0;
					///	
					///	 <summary> * 主板具有实现重启的功能 </summary>
					///	 
						virtual public void reset() = 0;
					};
				}
			}
		}
	}
}