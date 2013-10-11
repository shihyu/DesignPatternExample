#include "NewsPaper.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example4
				{

					std::string NewsPaper::getContent()
					{
						return content;
					}

					void NewsPaper::setContent(std::string content)
					{
						this->content = content;
						//内容有了，说明又出报纸了，那就通知所有的读者
						//注意在用Java中的Observer模式的时候，这句话不可少
						this->setChanged();
						//然后主动通知，这里用的是推的方式
						this->notifyObservers(this->content);
						//如果用拉的方式，这么调用
						//this.notifyObservers();
					}
				}
			}
		}
	}
}