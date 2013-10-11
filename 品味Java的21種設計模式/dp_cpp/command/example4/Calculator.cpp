#include "Calculator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example4
				{

					void Calculator::setAddCmd(Command *addCmd)
					{
						this->addCmd = addCmd;
					}

					void Calculator::setSubstractCmd(Command *substractCmd)
					{
						this->substractCmd = substractCmd;
					}

					void Calculator::addPressed()
					{
						this->addCmd->execute();
						//把操作记录到历史记录里面
						undoCmds.push_back(this->addCmd);
					}

					void Calculator::substractPressed()
					{
						this->substractCmd->execute();
						//把操作记录到历史记录里面
						undoCmds.push_back(this->substractCmd);
					}

					void Calculator::undoPressed()
					{
						if(this->undoCmds.size()>0)
						{
							//取出最后一个命令来撤销
							Command *cmd = this->undoCmds.back();
							cmd->undo();
							//如果还有恢复的功能，那就把这个命令记录到恢复的历史记录里面
							this->redoCmds.push_back(cmd);
							//然后把最后一个命令删除掉，
							this->undoCmds.remove(cmd);
						}
						else
						{
							puts("很抱歉，没有可撤销的命令");
						}
					}

					void Calculator::redoPressed()
					{
						if(this->redoCmds.size()>0)
						{
							//取出最后一个命令来重做
							Command *cmd = this->redoCmds.back();
							cmd->execute();
							//把这个命令记录到可撤销的历史记录里面
							this->undoCmds.push_back(cmd);
							//然后把最后一个命令删除掉
							this->redoCmds.remove(cmd);
						}
						else
						{
							puts("很抱歉，没有可恢复的命令");
						}
					}
				}
			}
		}
	}
}
