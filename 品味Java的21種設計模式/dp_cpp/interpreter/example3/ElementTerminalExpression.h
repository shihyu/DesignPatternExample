#pragma once

#include "ReadXmlExpression.h"
#include "Context.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example3
				{

					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;
					///
					/// <summary> * 元素作为终结符对应的解释器 </summary>
					/// 
					class ElementTerminalExpression : public ReadXmlExpression
					{
					///	
					///	 <summary> * 元素的名字 </summary>
					///	 
					private:
						std::string eleName;
					public:
						ElementTerminalExpression(std::string name);

						virtual std::string *interpret(Context *c);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
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