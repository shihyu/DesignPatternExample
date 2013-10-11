#pragma once

#include "Flyweight.h"
#include <string>

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


					///
					/// <summary> * 封装授权数据中重复出现部分的享元对象 </summary>
					/// 
					class AuthorizationFlyweight : public Flyweight
					{
					///	
					///	 <summary> * 内部状态，安全实体 </summary>
					///	 
					private:
						std::string securityEntity;
					///	
					///	 <summary> * 内部状态，权限 </summary>
					///	 
						std::string permit;
					///	
					///	 <summary> * 构造方法，传入状态数据 </summary>
					///	 * <param name="state"> 状态数据，包含安全实体和权限的数据，用","分隔 </param>
					///	 
					public:
						AuthorizationFlyweight(std::string state);

						virtual std::string getSecurityEntity();
						virtual std::string getPermit();

						virtual bool match(std::string securityEntity, std::string permit);

						virtual void add(Flyweight *f);
					};

				}
			}
		}
	}
}