#pragma once

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
				namespace example4
				{

					///
					/// <summary> * 用于处理自定义Xml取值表达式的接口 </summary>
					/// 
					class ReadXmlExpression
					{
					///	
					///	 <summary> * 解释表达式 </summary>
					///	 * <param name="c"> 上下文 </param>
					///	 * <returns> 解析过后的值，为了通用，可能是单个值，也可能是多个值，
					///	 *         因此就返回一个数组 </returns>
					///	 
					public:
						virtual std::string *interpret(Context *c) = 0;
					};


				}
			}
		}
	}
}