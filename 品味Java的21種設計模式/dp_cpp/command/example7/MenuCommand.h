#pragma once

#include "Command.h"
#include "CookApi.h"
#include "CommandQueue.h"

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
					/// <summary> * 菜单对象，是个宏命令对象 </summary>
					/// 
					class MenuCommand : public Command
					{

					///	
					///	 <summary> * 用来记录组合本菜单的多道菜品，也就是多个命令对象 </summary>
					///	 
					private:
						Collection<Command*> *col;
					///	
					///	 <summary> * 点菜，把菜品加入到菜单中 </summary>
					///	 * <param name="cmd"> 客户点的菜 </param>
					///	 
					public:
						virtual void addCommand(Command *cmd);
						virtual void setCookApi(CookApi *cookApi);
						virtual int getTableNum();
					///	
					///	 <summary> * 获取菜单中的多个命令对象 </summary>
					///	 * <returns> 菜单中的多个命令对象 </returns>
					///	 
						virtual Collection<Command*> *getCommands();

						virtual void execute();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								col = std::vector<Command*>();

								initialized = true;
							}
						}

public:
	MenuCommand()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}