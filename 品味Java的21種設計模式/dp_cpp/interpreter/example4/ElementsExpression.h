#pragma once

#include "ReadXmlExpression.h"
#include "Context.h"
#include <string>
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example4
				{

					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;
					///
					/// <summary> * 多个元素做为非终结符的解释处理对象 </summary>
					/// 
					class ElementsExpression : public ReadXmlExpression
					{
					///	
					///	 <summary> * 用来记录组合的ReadXmlExpression元素 </summary>
					///	 
					private:
						Collection<ReadXmlExpression*> *eles;
					///	
					///	 <summary> * 元素名字 </summary>
					///	 
						std::string eleName;
					public:
						ElementsExpression(std::string eleName);

						virtual std::string *interpret(Context *c);

						virtual bool addEle(ReadXmlExpression *ele);
						virtual bool removeEle(ReadXmlExpression *ele);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								eles = std::vector<ReadXmlExpression*>();
								eleName = "";

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}