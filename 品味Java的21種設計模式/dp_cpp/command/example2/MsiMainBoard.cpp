#include "MsiMainBoard.h"
#include <iostream>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example2
				{

					void MsiMainBoard::open()
					{
                        std::cout << "微星主板现在正在开机，请等候";
						std::cout << "接通电源......";
						std::cout << "设备检查......";
						std::cout << "装载系统......";
						std::cout << "机器正常运转起来......";
						std::cout << "机器已经正常打开，请操作";
					}
				}
			}
		}
	}
}
