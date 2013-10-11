#ifndef _API_H_
#define _API_H_
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example3
				{
					///
					/// <summary> * 某个接口(通用的、抽象的、非具体的功能的)  </summary>
					/// 
                    class Api
                    {
					///	
					///	 <summary> * 某个具体的功能方法的定义，用test1来演示一下。
					///	 * 这里的功能很简单，把传入的s打印输出即可  </summary>
					///	 * <param name="s"> 任意想要打印输出的字符串 </param>
					///	 
					public:
						virtual void test1(std::string) = 0;
					};

				}
			}
		}
	}
}
#endif
