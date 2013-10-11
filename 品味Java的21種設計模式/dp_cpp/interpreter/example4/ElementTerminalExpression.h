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