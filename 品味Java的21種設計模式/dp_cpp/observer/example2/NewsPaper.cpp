#include "NewsPaper.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example2
				{

					std::string NewsPaper::getContent()
					{
						return content;
					}

					void NewsPaper::setContent(std::string content)
					{
						this->content = content;
						//内容有了，说明又出报纸了，那就通知所有的读者
						notifyObservers();
					}
				}
			}
		}
	}
}