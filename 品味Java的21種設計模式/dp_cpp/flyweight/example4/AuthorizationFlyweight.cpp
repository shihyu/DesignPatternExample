#include "AuthorizationFlyweight.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example4
				{

					AuthorizationFlyweight::AuthorizationFlyweight(std::string state)
					{
//ORIGINAL LINE: String ss[] = state.split(",");
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'split' method:
						std::string *ss = state.split(",");
						securityEntity = ss[0];
						permit = ss[1];
					}

					std::string AuthorizationFlyweight::getSecurityEntity()
					{
						return securityEntity;
					}

					std::string AuthorizationFlyweight::getPermit()
					{
						return permit;
					}

					bool AuthorizationFlyweight::match(std::string securityEntity, std::string permit)
					{
						if(this->securityEntity.equals(securityEntity) && this->permit.equals(permit))
						{
							return true;
						}
						return false;
					}

					void AuthorizationFlyweight::add(Flyweight *f)
					{
						throw new UnsupportedOperationException("对象不支持这个功能");
					}
				}
			}
		}
	}
}
