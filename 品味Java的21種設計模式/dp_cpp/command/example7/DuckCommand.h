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
				namespace example7
				{


					///
					/// <summary> * 命令对象，北京烤鸭 </summary>
					/// 
					class DuckCommand : public Command, Serializable
					{
					private:
						CookApi *cookApi;
					public:
						virtual void setCookApi(CookApi *cookApi);
					private:
						int tableNum;
					public:
						DuckCommand(int tableNum);
						virtual int getTableNum();

						virtual void execute();
					};

				}
			}
		}
	}
}