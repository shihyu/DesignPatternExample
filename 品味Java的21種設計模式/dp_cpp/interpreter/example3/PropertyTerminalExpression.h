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
					///
					/// <summary> * 属性作为终结符对应的解释器 </summary>
					/// 
					class PropertyTerminalExpression : public ReadXmlExpression
					{
					///	
					///	 <summary> * 属性的名字 </summary>
					///	 
					private:
						std::string propName;
					public:
						PropertyTerminalExpression(std::string propName);

						virtual std::string *interpret(Context *c);
					};

				}
			}
		}
	}
}