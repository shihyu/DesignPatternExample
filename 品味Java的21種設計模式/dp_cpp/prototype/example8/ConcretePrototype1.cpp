#include "ConcretePrototype1.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example8
				{

					std::string ConcretePrototype1::getName()
					{
						return name;
					}

					void ConcretePrototype1::setName(std::string name)
					{
						this->name = name;
					}

					Prototype *ConcretePrototype1::clone()
					{
						ConcretePrototype1 *prototype = new ConcretePrototype1();
						prototype->setName(this->name);
						return prototype;
					}

					std::string ConcretePrototype1::ToString()
					{
						return "Now in Prototype1，name="+name;
					}
				}
			}
		}
	}
}
