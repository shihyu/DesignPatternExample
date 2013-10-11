#pragma once

#include "Command.h"
#include "CookApi.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{
					///
					/// <summary> * 命令对象，北京烤鸭 </summary>
					/// 
					class DuckCommand : public Command
					{
					private:
						CookApi *cookApi;
					public:
						virtual void setCookApi(CookApi *cookApi);

						virtual void execute();
					};

				}
			}
		}
	}
}