#pragma once

#include "Colleague.h"
#include "Mediator.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{
					///
					/// <summary> * 光驱类，一个同事类 </summary>
					/// 
					class CDDriver : public Colleague
					{
					public:
						CDDriver(Mediator *mediator);
					///	
					///	 <summary> * 光驱读取出来的数据 </summary>
					///	 
					private:
						std::string data;
					///	
					///	 <summary> * 获取光驱读取出来的数据 </summary>
					///	 * <returns> 光驱读取出来的数据 </returns>
					///	 
					public:
						virtual std::string getData();
					///	
					///	 <summary> * 读取光盘 </summary>
					///	 
						virtual void readCD();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								data = "";

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}