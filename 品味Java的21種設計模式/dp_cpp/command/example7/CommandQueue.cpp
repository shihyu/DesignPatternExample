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

					CommandQueue::CommandQueue()
					{
						//获取上次没有做完的命令队列
						cmds = FileOpeUtil::readFile(FILE_NAME);
						if(cmds==0)
						{
							cmds = std::vector<Command*>();
						}
					}

					void CommandQueue::addMenu(MenuCommand *menu)
					{
						//一个菜单对象包含很多命令对象
						for (unknown::const_iterator cmd = menu->getCommands()->begin(); cmd != menu->getCommands()->end(); ++cmd)
						{
							cmds.push_back(*cmd);
						}

						//记录请求日志
						FileOpeUtil::writeFile(FILE_NAME, cmds);
					}

					Command *CommandQueue::getOneCommand()
					{
						Command *cmd = 0;
						if(cmds.size() > 0)
						{
							//取出队列的第一个，因为是约定的按照加入的先后来处理
							cmd = cmds.front();
							//同时从队列里面取掉这个命令对象
							cmds.remove(0);

							//记录请求日志
							FileOpeUtil::writeFile(FILE_NAME, cmds);
						}
						return cmd;
					}
				}
			}
		}
	}
}
