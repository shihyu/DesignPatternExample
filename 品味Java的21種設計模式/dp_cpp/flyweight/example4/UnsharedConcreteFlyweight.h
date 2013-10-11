#pragma once

#include "Flyweight.h"
#include <string>
#include <vector>

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
					/// <summary> * 不需要共享的享元对象的实现，也是组合模式中的组合对象 </summary>
					/// 
					class UnsharedConcreteFlyweight : public Flyweight
					{
					///	
					///	 <summary> * 记录每个组合对象所包含的子组件 </summary>
					///	 
					private:
						std::vector<Flyweight*> list;

					public:
						virtual void add(Flyweight *f);

						virtual bool match(std::string securityEntity, std::string permit);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								list = std::vector<Flyweight*>();

								initialized = true;
							}
						}

public:
	UnsharedConcreteFlyweight()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}