#pragma once

#include "Context.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example2
				{

					///
					/// <summary> * 抽象表达式 </summary>
					/// 
					class AbstractExpression
					{
					///	
					///	 <summary> * 解释的操作 </summary>
					///	 * <param name="ctx"> 上下文对象 </param>
					///	 
					public:
						virtual void interpret(Context *ctx) = 0;
					};

				}
			}
		}
	}
}