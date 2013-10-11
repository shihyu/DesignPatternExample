#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example7
				{
					///
					/// <summary> * 产品对象 </summary>
					/// 
					class Product : public Cloneable
					{
					///	
					///	 <summary> * 产品编号 </summary>
					///	 
					private:
						std::string productId;
					///	
					///	 <summary> * 产品名称 </summary>
					///	 
						std::string name;


					public:
						virtual std::string getName();
						virtual void setName(std::string name);
						virtual std::string getProductId();
						virtual void setProductId(std::string productId);
						virtual std::string ToString();
						virtual object *clone();
					};

				}
			}
		}
	}
}