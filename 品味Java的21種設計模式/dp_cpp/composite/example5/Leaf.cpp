#include "Leaf.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example5
				{

					Leaf::Leaf(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Leaf::printStruct(std::string preStr)
					{
						puts(preStr+"-"+name);
					}
				}
			}
		}
	}
}