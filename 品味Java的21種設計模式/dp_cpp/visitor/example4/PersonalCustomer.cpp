#include "PersonalCustomer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example4
				{

					std::string PersonalCustomer::getTelephone()
					{
						return telephone;
					}

					void PersonalCustomer::setTelephone(std::string telephone)
					{
						this->telephone = telephone;
					}

					int PersonalCustomer::getAge()
					{
						return age;
					}

					void PersonalCustomer::setAge(int age)
					{
						this->age = age;
					}

					void PersonalCustomer::accept(Visitor *visitor)
					{
						//回调访问者对象的相应方法
						visitor->visitPersonalCustomer(this);
					}
				}
			}
		}
	}
}
