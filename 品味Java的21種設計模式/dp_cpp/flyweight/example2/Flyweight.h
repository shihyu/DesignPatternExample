#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example2
				{
					///<summary> *
					/// * 享元接口，通过这个接口享元可以接受并作用于外部状态 </summary>
					/// 
					class Flyweight
					{
					///	
					///	 <summary> * 示例操作，传入外部状态 </summary>
					///	 * <param name="extrinsicState"> 示例参数，外部状态 </param>
					///	 
					public:
						virtual public void operation(std::string) = 0;
					};

				}
			}
		}
	}
}