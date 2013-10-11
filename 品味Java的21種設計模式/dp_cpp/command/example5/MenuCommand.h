#pragma once

#include "Command.h"

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