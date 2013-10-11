#include "Reader.h"

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

					std::string Reader::getName()
					{
						return name;
					}

					void Reader::setName(std::string name)
					{
						this->name = name;
					}

					void Reader::update(Observable *o, object *obj)
					{
						//这是采用推的方式
						puts(name+"收到报纸了，阅读先。目标推过来的内容是==="+obj);
						//这是获取拉的数据
						puts(name+"收到报纸了，阅读先。主动到目标对象去拉的内容是===" +(static_cast<NewsPaper*>(o))->getContent());
					}
				}
			}
		}
	}
}
